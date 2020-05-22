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


class StreamSocket(object):
    """Super class containing methods common to Client and Server classes"""
    def __init__(self, ipaddr, port, verbose):
        self.Address = ipaddr
        self.Port = port
        self.Verbose = verbose
        self.Timeout = 60

    @staticmethod
    def recv_all(sock: socket.socket, length: int) -> Union[bytearray, None]:
        """Receive data on TCP socket and check for EOF"""
        data = bytearray()

        while len(data) < length:
            fragment = sock.recv(length - len(data))

            if fragment is not None:
                data.extend(fragment)
                return data
            else:
                return None

    def receive(self, sock: socket.socket) -> Union[str, None]:
        """Receive data without experiencing packet fragmentation"""
        # TODO: unpack bool indicating stderr or stdout into bytes after receiving
        raw_length = self.recv_all(sock, 4)

        if raw_length is not None:
            msg_length = struct.unpack(">I", raw_length)[0]
            return self.recv_all(sock, msg_length).decode()
        else:
            return None

    @staticmethod
    def send(sock: socket.socket, msg: Union[str, bytes]) -> None:
        """Prefix/send messages with 32-bit unsigned int size prefix.
        Unsigned ints are packed in network byte (big-endian) order"""
        # TODO: pack bool indicating stderr or stdout into bytes before sending

        if type(msg) == str:
            msg = struct.pack(">I", len(msg)) + msg.encode()
        elif type(msg) == bytes:
            msg = struct.pack(">I", len(msg)) + msg
        else:
            raise ValueError("Expected <msg> to be of type Union[str, bytes]")

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
    def execute(command: Union[str, list], binary: str) -> [bytes, str]:
        """Execute the command using system shell subprocess.
        Returns the stdout in bytes and the output level [info|error]"""
        stats = subprocess.run(
            command,
            executable=binary,
            shell=True,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )

        if stats.returncode == 0:
            return [stats.stdout, "info"]
        else:
            return [stats.stderr, "error"]

    @staticmethod
    def sys_info(encode: bool = False) -> Union[str, bytes]:
        """Retrieve system information of the local machine.
        Transforms uname_result(NamedTuple) to a string."""
        uname, out = str(platform.uname()), []

        for stat in uname[13:][:-1].split(", ", 5):
            out.append(stat.split("=")[1].replace("\'", ""))

        if encode:
            return " ".join(out).encode()
        else:
            return " ".join(out)

    @staticmethod
    def except_handler(exc: Exception) -> None:
        """Handle common socket connection exceptions"""
        sock_excepts = [
            socket.timeout,
            socket.gaierror,
            socket.herror,
            OSError
        ]

        if exc.__class__.__name__ in sock_excepts:
            utils.throw([exc.args[1]])
        else:
            raise exc


class Post(object):
    """Post connection utilities such as file system IO handling"""
