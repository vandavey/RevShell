import os
import socket
import shutil
import platform
import sys
import subprocess
from typing import Union


class SocketStream(object):
    """Super class containing methods common to Client and Server classes"""
    def __init__(self, ip_address, socket_port, buffer_size, verbose):
        self.Address = ip_address
        self.Port = socket_port
        self.Buffer = buffer_size
        self.Verbose = verbose

    @staticmethod
    def get_executable(op_sys) -> str:
        """Get the shell executable file path for the local system"""
        if op_sys == "nt":
            executable = shutil.which("powershell.exe")
            if executable is None:
                executable = shutil.which("cmd.exe")
        else:
            executable = shutil.which("bash")
            if executable is None:
                executable = shutil.which("sh")

        return executable

    @staticmethod
    def execute(command: Union[str, list], shell_exec: str) -> bytes:
        """Execute the command using system shell subprocess"""
        stats = subprocess.run(
            command,
            executable=shell_exec,
            shell=True,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )

        if stats.returncode == 0:
            return stats.stdout
        else:
            return stats.stderr

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

    def except_handler(self, exception: Exception) -> None:
        """Handle common socket connection exceptions"""
        if exception == ConnectionRefusedError:
            throw(f"Connection was refused by {self.Address}", kill=False)
        elif exception == ConnectionResetError:
            throw(f"Connection was reset by {self.Address}", kill=False)
        elif exception == ConnectionAbortedError:
            throw(f"Connection was aborted by {self.Address}", kill=False)
        else:
            throw(str(exception))


class Post(object):
    """Post connection utilities such as IO handling"""
