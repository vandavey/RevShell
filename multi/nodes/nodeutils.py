import os
import socket
import shutil
import platform
import sys
import getpass
import struct
import subprocess
from typing import Union
from pathlib import Path

from multi import utils

RemoteOPSYS = None


class NodeConfig(object):
    """Super class with common properties for StreamSocket classes"""
    def __init__(self):
        self.UserName = None
        self.Hostname = None
        self.LastWD = None
        self.RemoteOpSys = None
        self.Shell = None
        self.Environment = None
        self.Timeout = 60
        self.Special = [
            {"exit": ["exit", "quit", "logout"]},
            {"ls": ["ls", "dir", "gci", "get-childitem"]},
            {"cd": ["cd", "set-location"]},
            {"clear": ["clear", "cls", "clear-host"]},
            {"grep": ["grep", "findstr"]}
        ]


class StreamSocket(NodeConfig):
    """Super class containing methods common to Client and Server classes"""
    def __init__(self, ipaddr: str, port: int, shell: str, verbose: bool, debug: bool):
        super().__init__()
        self.Address = ipaddr
        self.Port = port
        self.Shell = shell
        self.Verbose = verbose
        self.Debug = debug

    @staticmethod
    def recv_all(sock: socket.socket, length: int) -> bytearray:
        """Receive data on TCP socket and check for EOF"""
        data = bytearray()

        while len(data) < length:
            fragment = sock.recv(length - len(data))
            if fragment:
                data.extend(fragment)

        return data

    def recv_msg(self, sock: socket.socket) -> str:
        """Receive socket data without experiencing packet fragmentation"""
        raw_len = self.recv_all(sock, 4)  # get size indicator

        if raw_len:
            length = struct.unpack(">I", raw_len)[0]
            return self.recv_all(sock, length).decode()
        else:
            return ""

    def receive_cmd(self, sock: socket.socket) -> (str, str):
        """Receive data without experiencing packet fragmentation. This method
        is intended to be used by Server to receive client command output"""
        raw_len = self.recv_all(sock, 4)  # get size indicator

        if raw_len:
            length = struct.unpack(">I", raw_len)[0]
            data = self.recv_all(sock, length).decode().split("::")
            return data[0], data[1]
        else:
            return "", ""

    @staticmethod
    def send_output(sock: socket.socket, msg: str, out_type: str) -> None:
        """Prefix/send messages with 32-bit unsigned int size prefix. This
        method is intended to be used by Client to send command output"""
        if out_type in ["stdout", "stderr"]:
            msg = "::".join([out_type, msg])
        else:
            raise ValueError("Expected <out_type> to be in [stdout|stderr]")

        message = struct.pack(">I", len(msg)) + msg.encode()
        sock.sendall(message)

    @staticmethod
    def send(sock: socket.socket, msg: str) -> None:
        """Prefix/send messages with 32-bit unsigned int size indicator.
        Unsigned int is packed in network byte (big-endian) order"""
        msg = struct.pack(">I", len(msg)) + msg.encode()
        sock.sendall(msg)

    @staticmethod
    def get_exec(opsys: str, shell: str = None) -> (str, str):
        """Get the shell executable file path for the local system.
        Returns the file path and friendly-name of the shell."""
        if shell is not None:
            if shutil.which(shell) is not None:
                return [shutil.which(shell), shell]
            else:
                utils.status(f"Cannot locate {shell}, now using defaults", "warn")

        if opsys == "nt":
            if shutil.which("powershell.exe") is None:
                return [shutil.which("cmd.exe"), "cmd.exe"]
            else:
                return [shutil.which("powershell.exe"), "powershell.exe"]

        if shutil.which("bash") is None:
            return [shutil.which("sh"), "sh"]
        else:
            return [shutil.which("bash"), "bash"]

    def get_prompt(self) -> bytes:
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
        for family in self.Special:
            for key, value, in family.items():
                if word.split()[0].lower() in value:
                    return key

    def _run_cmd(self, command: str, binary: str) -> (bytes, bytes, bytes):
        """Protected helper method to execute command once input is validated.
        StreamSocket.execute method should be called to properly access this method"""
        if "\\" in command:
            command.replace("\\", "/")

        print(f"self.LastWD: {self.LastWD}")  # for debugging

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

        return [command.encode(), stats.stdout, stats.stderr]

    def change_dir(self, command: str) -> (bool, str):
        """Update LastWD property with the new location. Return the path tested
        and a bool indicating if working directory was successfully changed"""
        # TODO: test and validate functionality in prod
        # TODO: fix relative Paths not working

        if "\\" in command:
            command = command.replace("\\", "/")

        cmd_args = command.split()

        if len(cmd_args) > 1:
            path = str(Path(cmd_args[1]).resolve())
        else:
            path = None

        if path is not None:
            if Path(path).resolve().exists():
                new_path = str(Path(path).resolve())
                self.LastWD = new_path
                #self.LastWD = str(path)
                return [True, str(path)]
            else:
                new_path = Path(self.LastWD).joinpath(path).resolve()

            if new_path.exists():
                self.LastWD = new_path
                return [True, new_path]
            else:
                return [False, path]
        else:
            return [False, path]

    def get_sysinfo(self) -> (str, str):
        """Retrieve system information of the local machine.
        Transforms uname_result [NamedTuple] to a string."""
        hostinfo = "::".join([
            getpass.getuser(),
            socket.gethostname(),
            self.LastWD,
            utils.OPSYS,
            self.Shell,
            str(os.environ.copy())[1: -1]
        ])

        output = []
        uname_str = str(platform.uname())[13:][:-1]
        uname = uname_str.split(", ", 5)

        for stat in uname:
            output.append(stat.split("=")[1].replace("'", ""))

        sysinfo = " ".join(output)
        return hostinfo, sysinfo

    @staticmethod
    def except_handler(exc: Exception) -> None:
        """Handle common socket connection exceptions"""
        sock_excepts = [
            OSError,
            socket.timeout,
            socket.gaierror,
            socket.herror
        ]

        if exc.__class__.__name__ in sock_excepts:
            utils.throw([exc.args[1]])
        else:
            raise exc


class Post(object):
    """Post connection utilities such as file system IO handling"""
    def __init__(self):
        pass
