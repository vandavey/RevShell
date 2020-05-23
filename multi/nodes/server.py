import getpass

from .nodeutils import (
    os,
    socket,
    subprocess,
    struct,
    sys,
    StreamSocket,
    utils
)


class Server(StreamSocket):
    """TCP socket server class for the command shell"""
    def __init__(self, lhost: str, port: int, verb: bool, debug: bool):
        super().__init__(lhost, port, verb, debug)

    def listen(self) -> None:
        """Begin listening for incoming TCP connection from the client shell"""
        server_sock = socket.socket()
        # server_sock.settimeout(60)

        # TODO: configure timeouts and blocking
        server_sock.bind((self.Address, self.Port))

        server_sock.listen(1)  # stay open for one connection
        utils.status(f"Listening for incoming TCP connection on port {self.Port}...")

        client_sock, addr = server_sock.accept()

        with client_sock:
            # TODO: print additional info in opening banner
            utils.status(f"Received connection from {addr[0]} on port {addr[1]}.")

            user, host = getpass.getuser(), socket.gethostname()
            self.send(client_sock, f"Connection established with {host}.")

            client_info = self.receive(client_sock).decode()
            utils.status(client_info)

            try:
                # TODO: change prompt to use remote os.getcwd instead of local
                while True:
                    if os.name == "nt":
                        prompt = f"Shell {os.getcwd()}> "
                    else:
                        prompt = f"{user}@{host}:{os.getcwd()}> "

                    command = input(f"{prompt}")
                    self.send(client_sock, command)

                    # TODO: change stdout color when its an error
                    if command.lower() not in ["exit", "quit"]:
                        output = self.receive(client_sock).decode()

                        # TODO: print with end="" to avoid left over line buffer
                        if command.lower() in ["cls", "clear", "clear-screen"]:
                            pass
                        else:
                            utils.status(output, "output", command)
                    else:
                        if self.Verbose:
                            utils.status("Exiting RevShell.")
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
