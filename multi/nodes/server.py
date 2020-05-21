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
    def __init__(self, lhost="0.0.0.0", port=4444, verb: bool = False):
        super().__init__(str(lhost), int(port), verb)

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
            utils.status(f"Received connection from {addr[0]} on port {addr[1]}.")

            user, host = getpass.getuser(), socket.gethostname()
            self.send(client_sock, f"Connection established with {host}.")

            client_info = self.receive(client_sock).decode()
            utils.status(client_info)

            try:
                while True:
                    if os.name == "nt":
                        prompt = f"Shell {os.getcwd()}> "
                    else:
                        prompt = f"{user}@{host}:{os.getcwd()}> "

                    command = input(f"{prompt}")
                    self.send(client_sock, command)

                    if command.lower() in ["exit", "quit"]:
                        self.send(client_sock, "Connection will now terminate.")
                        break

                    # TODO: change stdout color when its an error
                    output = self.receive(client_sock).decode()

                    utils.status(output, stdin=command)
                    #utils.status(output, level=, stdin=command)
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
