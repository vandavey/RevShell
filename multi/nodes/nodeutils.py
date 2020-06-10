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


class StreamSocket(object):
    """Super class containing methods common to Client and Server classes"""
    def __init__(
        self,
        ip_address: str,
        port: int,
        shell_exec: str,
        verbose: bool,
        debug: bool,
        timeout: int = 60,
        start_dir: Path = None
    ):
        self.Address = ip_address
        self.Port = port
        self.Shell = shell_exec
        self.Verbose = verbose
        self.Debug = debug
        self.Timeout = timeout
        self.Environ = os.environ.copy()
        self.Special = [
            {"exit": ["exit", "quit", "logout"]},
            {"ls": ["ls", "dir", "gci", "get-childitem"]},
            {"cd": ["cd", "set-location"]},
            {"clear": ["clear", "cls", "clear-host"]},
            {"grep": ["grep", "findstr"]}
        ]

        if start_dir is None:
            if utils.OPSYS == "nt":
                self.LastWD = Path(os.getenv("USERPROFILE"))
            else:
                self.LastWD = Path(os.getenv("HOME"))
        else:
            self.LastWD = start_dir

    @staticmethod
    def recv_all(sock: socket.socket, length: int) -> bytearray:
        """Receive data on TCP socket and check for EOF"""
        data = bytearray()

        while len(data) < length:
            fragment = sock.recv(length - len(data))

            if fragment:
                data.extend(fragment)

        return data

    def receive(self, sock: socket.socket) -> bytes:
        """Receive data without experiencing packet fragmentation"""
        # TODO: unpack bool indicating stderr or stdout into bytes after receiving

        # grab the payload size indicator bytes
        data = self.recv_all(sock, 4)

        if data:
            length = struct.unpack(">I", data)[0]
            return self.recv_all(sock, length)
        else:
            return "".encode()

    @staticmethod
    def send(sock: socket.socket, msg: Union[bytes, str]) -> None:
        """Prefix/send messages with 32-bit unsigned int size prefix.
        Unsigned ints are packed in network byte (big-endian) order"""
        # TODO: pack bool indicating stderr or stdout into bytes before sending

        if type(msg) == str:
            msg = struct.pack(">I", len(msg)) + msg.encode()
        elif type(msg) == bytes:
            msg = struct.pack(">I", len(msg)) + msg

        sock.sendall(msg)

    @staticmethod
    def get_exec(shell: str = None) -> [str, str]:
        """Get the shell executable file path for the local system.
        Returns the shell file path and friendly-name"""
        if shell is not None:
            if shutil.which(shell) is not None:
                return [shutil.which(shell), shell]
            else:
                utils.status(f"Cannot locate {shell}, now using system defaults")

        if utils.OPSYS == "nt":
            if shutil.which("powershell.exe") is None:
                return [shutil.which("cmd.exe"), "cmd.exe"]
            else:
                return [shutil.which("powershell.exe"), "powershell.exe"]

        if shutil.which("bash") is None:
            return [shutil.which("sh"), "sh"]
        else:
            return [shutil.which("bash"), "bash"]

    def get_prompt(self) -> bytes:
        """Return thee working directory (with ansi styling for POSIX)"""
        # TODO: finish and test utils.style_prompt
        if utils.OPSYS == "nt":
            return utils.style_prompt(getpass.getuser(), self.LastWD)
        else:
            return utils.style_prompt(
                getpass.getuser(),
                self.LastWD,
                socket.gethostname()
            )

    def change_dir(self, command: str) -> [bool, str]:
        """Update LastWD property with the new location. Return
        the path tested and a bool indicating if working directory
        was successfully changed"""
        # TODO: test and validate functionality in prod

        if "\\" in command:
            command = command.replace("\\", "/")

        cmd_args = command.split()

        if len(cmd_args) > 1:
            path = Path(cmd_args[1]).resolve()
        else:
            path = None

        if Path.exists(path):
            self.LastWD = str(path)
            return [True, path]
        else:
            return [False, path]

    def check_special(self, word: str) -> Union[str, None]:
        """Check to see if command contains a special keyword"""
        for family in self.Special:
            for key, value, in family.items():
                if word.split()[0].lower() in value:
                    return key

    def _run_cmd(self, command: str, binary: str) -> [bytes, bytes]:
        """Protected helper method to execute command once input is validated.
        StreamSocket.execute should be called to properly access this method"""
        stats = subprocess.run(
            args=command,
            cwd=str(self.LastWD.resolve()),
            env=self.Environ,
            executable=binary,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            shell=True
        )

        return [stats.stdout, stats.stderr]

    def execute(self, command: str) -> [bytes, bytes]:
        """Execute the command using system shell subprocess,
        returns the a list of stdout and stderr as [bytes, bytes]."""
        family = self.check_special(command)

        if family is not None:
            if family == "clear":
                return [utils.Ansi.clear(), "".encode()]

            # TODO: add handling for current directory
            if family == "cd":
                exists, path = self.change_dir(command)
                if exists:
                    self.LastWD = path
                    return [command.encode(), "".encode()]
                else:
                    return ["".encode(), f"Cannot resolve path {path}".encode()]

            if family == "ls":
                if utils.OPSYS != "nt":
                    command = f"{command} -A --color"

            elif family == "grep":
                # TODO: fix issue with grep throwing false-positives
                if utils.OPSYS != "nt":
                    #command = f"{command} -i --color"
                    command = f"{command} --color"

        return self._run_cmd(command, self.Shell)

    @staticmethod
    def sys_info(encode: bool = False) -> Union[str, bytes]:
        """Retrieve system information of the local machine.
        Transforms uname_result [NamedTuple] to a string."""
        output = []
        info_str = str(platform.uname())[13:][:-1]
        info = info_str.split(", ", 5)

        for stat in info:
            output.append(stat.split("=")[1].replace("\'", ""))

        if encode:
            return " ".join(output).encode()
        else:
            return " ".join(output)

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
