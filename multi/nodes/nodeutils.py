import os
import socket
import shutil
import time
import platform
import sys
import getpass
import struct
import subprocess
from pathlib import Path
from dns import resolver
from typing import Union

from multi import utils


class SocketShell(object):
    """Command shell fields and methods for remote command shells"""
    def __init__(self, shell: str, debug: bool):
        self.Shell = shell
        self.Debug = debug
        self.UserName = None
        self.Hostname = None
        self.LastWD = None
        self.RemoteOpSys = None
        self.Environment = None
        self.SpecialCmds = [
            {"about": ("sysinfo", "about")},
            {"cd": ("cd", "set-location")},
            {"clear": ("clear", "cls", "clear-host")},
            {"exit": ("exit", "quit", "logout")},
            {"fqdn": ("fqdn", "domain")},
            {"ls": ("ls", "dir", "gci", "get-childitem")},
            {"resolve": ("resolve", "lookup")},
            {"route": ("route", "route6")},
        ]

    def _run_cmd(self, command: str, binary: str) -> tuple:
        """Protected helper method to execute command once input is validated.
        StreamSocket.execute method should be called to properly access this method"""
        if "\\" in command:
            command = command.replace("\\", "/")

        stats = subprocess.run(
            args=command,
            cwd=self.LastWD,
            env=self.Environment,
            executable=binary,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            shell=True
        )

        return stats.stdout, stats.stderr

    def _change_dir(self, command: str) -> tuple:
        """Update LastWD property with the new location. Return the path tested
        and a bool indicating if working directory was successfully changed.
        This method is protected and should only be called by socket.execute"""
        # TODO: add handling for [cd $ENV] commands

        if "\\" in command:
            command = command.replace("\\", "/")
        cmd_args = command.split()

        if len(cmd_args) > 1:
            path = Path(cmd_args[1]).resolve()
        else:
            path = None

        if path is not None:
            if path.exists():
                self.LastWD = str(path)
                os.chdir(self.LastWD)
                return True, self.LastWD
            else:
                return False, str(path)
        else:
            return True, self.LastWD

    @staticmethod
    def get_exec(opsys: str, shell: str = None) -> tuple:
        """Get the shell executable file path for the local system.
        Returns the file path and friendly-name of the shell."""
        if shell is not None:
            if shutil.which(shell) is not None:
                return shutil.which(shell), shell
            else:
                utils.status(f"Cannot locate {shell}, now using defaults", "warn")

        if opsys == "nt":
            if shutil.which("powershell.exe") is None:
                return shutil.which("cmd.exe"), "cmd.exe"
            else:
                return shutil.which("powershell.exe"), "powershell.exe"

        if shutil.which("bash") is None:
            return shutil.which("sh"), "sh"
        else:
            return shutil.which("bash"), "bash"

    def get_prompt(self) -> str:
        """Return the shell prompt after applying ansi styling"""
        if self.RemoteOpSys == "nt":
            return utils.style_prompt(
                self.UserName,
                self.LastWD,
                self.RemoteOpSys
            )
        else:
            return utils.style_prompt(
                self.UserName,
                self.LastWD,
                self.RemoteOpSys,
                self.Hostname
            )

    def check_special(self, word: str) -> Union[str, None]:
        """Check to see if command contains a special keyword"""
        if word == "":
            return

        for family in self.SpecialCmds:
            for key, value, in family.items():
                if word.split()[0].lower() in value:
                    return key

    def get_sysinfo(self) -> tuple:
        """Retrieve system information of the local machine, as well
        as user/host information. Return a tuple with two strings."""
        uname = platform.uname()
        return (
            "::".join((
                getpass.getuser(),
                socket.gethostname(),
                self.LastWD,
                utils.OPSYS,
                self.Shell,
                time.asctime(),
                str(os.environ.copy())[1: -1],
            )),
            " ".join((
                uname.system,
                uname.node,
                uname.release,
                uname.version,
                uname.machine
            ))
        )

    def about_host(self) -> bytes:
        """Get local system info to send to server"""
        uname = platform.uname()
        info = " ".join((
            uname.system,
            uname.node,
            uname.release,
            uname.version,
            uname.machine
        ))

        if "\\" in self.Shell:
            shell = self.Shell.replace("\\", "/")
        else:
            shell = self.Shell

        return b"\r\n".join((
            time.asctime().encode(),
            info.encode(),
            ("-" * 25).encode(),
            f"Hostname: {socket.gethostname()}".encode(),
            f"Username: {getpass.getuser()}".encode(),
            f"Shell: {shell.split('/')[-1]}\r\n".encode()
        ))

    @staticmethod
    def nslookup(command: str) -> tuple:
        """Run DNS query, return bytes tuple (stdout and stderr)"""
        # TODO: test and integrate, add reverse dns logic
        usage = "nslookup [-s SERVER] NAME"
        cmd_args = command.split()
        server = "8.8.8.8"

        if len(cmd_args) == 1:
            msg = "Missing required argument for NAME"
            return b"", f"{usage}\r\n{msg}\r\n".encode()

        if "-s" in cmd_args:
            val_index = cmd_args.index("-s") + 1

            if not 0 <= val_index < len(cmd_args):
                msg = "Missing required argument for SERVER"
                return b"", f"{usage}\r\n{msg}\r\n".encode()

            if not utils.valid_ipv4(cmd_args[val_index]):
                msg = "SERVER is not a valid IPv4 address"
                return b"", f"{usage}\r\n{msg}\r\n".encode()
            else:
                server = cmd_args[val_index]

        try:
            server_info = socket.gethostbyaddr(server)
        except socket.herror:
            serv_name = server
        else:
            if "dns" in server_info[0]:
                serv_name = server_info[0]
            else:
                serv_name = server

        res = resolver.Resolver()
        res.nameservers = [server]
        results = [x.address for x in res.query(name)]

        output = b"\r\n".join((
            f"Server: {serv_name}".encode(),
            f"Address: {server}\r\n".encode(),
            f"Name: {name}".encode(),
            f"Address: {results[0]}".encode()
        ))

        return output, b""

    def upload(self, target: str, path: str) -> None:
        """Upload files from the local system to the remote system"""

    def download(self, path: str) -> bytes:
        """Download files from the remote system to the local system"""


class StreamSocket(SocketShell):
    """Super class containing methods common to Client and Server classes"""
    def __init__(
        self,
        ipaddress: str,
        port: int,
        shell: str,
        debug: bool
    ):
        super().__init__(shell, debug)
        self.Address = ipaddress
        self.Port = port

    @staticmethod
    def _recv_all(sock: socket.socket, length: int) -> bytearray:
        """Protected helper method to get socket data and check for EOF"""
        data = bytearray()

        while len(data) < length:
            fragment = sock.recv(length - len(data))
            if fragment:
                data.extend(fragment)

        return data

    def recv_msg(self, sock: socket.socket) -> str:
        """Receive socket data without experiencing packet fragmentation"""
        raw_len = self._recv_all(sock, 4)  # get size indicator

        if raw_len:
            length = struct.unpack(">I", raw_len)[0]
            return self._recv_all(sock, length).decode()
        else:
            return ""

    def recv_cmd(self, sock: socket.socket) -> tuple:
        """Receive data without experiencing packet fragmentation. This method
        is intended to be used by Server to receive client command output"""
        raw_len = self._recv_all(sock, 4)  # get size indicator

        if raw_len:
            length = struct.unpack(">I", raw_len)[0]
            data = self._recv_all(sock, length).decode().split("::")

            return data[0], data[1]
        else:
            return "", ""

    @staticmethod
    def send_output(sock: socket.socket, msg: str, out_type: str) -> None:
        """Prefix/send messages with 32-bit unsigned int size prefix. This
        method is intended to be used by Client to send command output"""
        if out_type in ("output", "error"):
            msg = f"{out_type}::{msg}"
        else:
            raise ValueError("Expected <out_type> to be in [output|error]")

        message = struct.pack(">I", len(msg)) + msg.encode()
        sock.sendall(message)

    @staticmethod
    def send_msg(sock: socket.socket, msg: str) -> None:
        """Prefix/send messages with 32-bit unsigned int size indicator.
        Unsigned int is packed in network byte (big-endian) order"""
        msg = struct.pack(">I", len(msg)) + msg.encode()
        sock.sendall(msg)

    @staticmethod
    def except_handler(exc: Exception) -> None:
        """Handle common socket connection exceptions"""
        sock_excepts = (
            OSError,
            socket.timeout,
            socket.gaierror,
            socket.herror
        )

        if exc.__class__.__name__ in sock_excepts:
            utils.throw(exc.args[1])
        else:
            raise exc
