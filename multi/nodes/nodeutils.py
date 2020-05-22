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
    def __init__(self, ipaddr: str, port: int, verb: bool, debug: bool):
        self.Address = ipaddr
        self.Port = port
        self.Verbose = verb
        self.Debug = debug
        self.Timeout = 60

    @staticmethod
    def recv_all(sock: socket.socket, length: int) -> bytearray:
        """Receive data on TCP socket and check for EOF"""
        # TODO: fix issue with sending bad data
        data = bytearray()

        while len(data) < length:
            fragment = sock.recv(length - len(data))

            if fragment:
                data.extend(fragment)

        return data

    def receive(self, sock: socket.socket) -> bytes:
        """Receive data without experiencing packet fragmentation"""
        # TODO: unpack bool indicating stderr or stdout into bytes after receiving

        # get the first 4 bytes (data size indicator)
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
    def execute(command: Union[str, list], binary: str) -> [bytes, bytes]:
        """Execute the command using system shell subprocess,
        returns the a list of stdout and stderr as [bytes, bytes]."""
        stats = subprocess.run(
            command,
            executable=binary,
            shell=True,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )

        return [stats.stdout, stats.stderr]

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
