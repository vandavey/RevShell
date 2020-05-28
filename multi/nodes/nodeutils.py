import os
import socket
import shutil
import platform
import sys
import struct
import subprocess
from typing import Union
from pathlib import Path

from multi import utils


class ShellHandler(object):
    """System command shell process handler"""
    def __init__(self, shell_exec: str):
        if shell_exec is None:
            shell_exec = self.get_exec()

        self.Shell = subprocess.Popen(
            args=[],
            env=os.environ.copy(),
            cwd=str(Path.home()),
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            executable=shell_exec,
            shell=True
        )

    def get_exec(self) -> str:
        """Get the shell executable file path for the local system"""
        if os.name == "nt":
            executable = shutil.which("powershell.exe")
            if executable is None:
                executable = shutil.which("cmd.exe")
        else:
            executable = shutil.which("bash")
            if executable is None:
                executable = shutil.which("sh")

        return executable

    @staticmethod
    def get_prompt() -> bytes:
        """Return thee working directory (with ansi styling for POSIX)"""
        if os.name == "nt":
            prompt = f"Shell {os.getcwd()}> "
        else:
            prompt = f"{user}@{host}:{os.getcwd()}> "

        return utils.style_prompt(prompt, os.name)

    def spawn(self, shell_exec: str = None) -> None:
        """Spawn new command shell process to be used for code execution"""
        if shell_exec is None:
            shell_exec = self.get_exec()

        # Popen expects [str] for non-shell calls
        self.Shell = subprocess.Popen(
            args=[],
            env=os.environ.copy(),
            cwd=str(Path.home()),
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            executable=shell_exec,
            shell=True
        )

        if self.Verbose:
            utils.status(f"{shell_exec}")

    def _run_cmd(self, command: list) -> [bytes, bytes]:
        """Protected helper method to execute command once input is validated.
        self.execute should be called to properly access this method"""
        return self.Shell.communicate(command, timeout=60)


    def execute(self, command: str, binary: str) -> [bytes, bytes]:
        """Execute the command using system shell subprocess,
        returns the a list of stdout and stderr as [bytes, bytes]."""
        if command.lower() in ["cls", "clear", "clear-screen"]:
            return [utils.Ansi.clear(), b""]

        if command.lower().split()[0] in ["ls", "dir"]:
            if os.name != "nt":
                command = f"{command} -A --color"

        elif command.lower().split()[0] in ["grep", "findstr"]:
            # TODO: fix issue with grep throwing false-positives
            if os.name != "nt":
                # command = f"{command} -i --color"
                command = f"{command} --color"

        return self._run_cmd(command.split())



class StreamSocket(object):
    """Super class containing methods common to Client and Server classes"""
    def __init__(self, ipaddr: str, port: int, verb: bool, debug: bool):
        self.Address = ipaddr
        self.Port = port
        self.Verbose = verb
        self.Debug = debug
        self.Timeout = 60
        #self.Shell = ShellHandler.get_exec()

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

        # get the first 4 bytes (payload size indicator)
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
    def get_executable() -> str:
        """Get the shell executable file path for the local system"""
        if os.name == "nt":
            executable = shutil.which("powershell.exe")
            if executable is None:
                executable = shutil.which("cmd.exe")
        else:
            executable = shutil.which("bash")
            if executable is None:
                executable = shutil.which("sh")

        return executable

    @staticmethod
    def get_prompt() -> bytes:
        """Return thee working directory (with ansi styling for POSIX)"""
        if os.name == "nt":
            prompt = f"Shell {os.getcwd()}> "
        else:
            prompt = f"{user}@{host}:{os.getcwd()}> "

        return utils.style_prompt(prompt)

    @staticmethod
    def _run_cmd(command: str, binary: str) -> [bytes, bytes]:
        """Protected helper method to execute command once input is validated.
        StreamSocket.execute should be called to properly access this method"""
        stats = subprocess.run(
            command,
            executable=binary,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            shell=True
        )

        return [stats.stdout, stats.stderr]

    @staticmethod
    def execute(command: str, binary: str) -> [bytes, bytes]:
        """Execute the command using system shell subprocess,
        returns the a list of stdout and stderr as [bytes, bytes]."""
        if command.lower() in ["cls", "clear", "clear-screen"]:
            return [utils.Ansi.clear(), b""]

        if (len(command) > 1) & (command in ["ls", "dir", "grep", "findstr"]):
            check = True
        else:
            check = False

        if check:
            if command.lower().split()[0] in ["ls", "dir"]:
                if os.name != "nt":
                    command = f"{command} -A --color"

            elif command.lower().split()[0] in ["grep", "findstr"]:
                # TODO: fix issue with grep throwing false-positives
                if os.name != "nt":
                    #command = f"{command} -i --color"
                    command = f"{command} --color"

        return StreamSocket._run_cmd(command, binary)

    @staticmethod
    def sys_info(encode: bool = False) -> Union[str, bytes]:
        """Retrieve system information of the local machine.
        Transforms uname_result [NamedTuple] to a string."""
        # uname: [NamedTuple] -> scrape/clean: [str] => split: [list]
        info = str(platform.uname())[13:][:-1].split(", ", 5)
        output = []

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
