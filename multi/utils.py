import os
from ipaddress import IPv4Address
from typing import Union
from pathlib import Path

import colorama
from colorama import (Style, Fore)

OPSYS = os.name


class Ansi(object):
    """Formatting class containing Ansi escape sequences"""
    @staticmethod
    def color(color: str) -> str:
        """Return the ansii sequence of a specified color"""
        if color.lower() == "red":
            return "\x1b[91m"
        elif color.lower() == "green":
            return "\x1b[92m"
        elif color.lower() == "yellow":
            return "\x1b[93m"
        elif color.lower() == "cyan":
            return "\x1b[96m"
        elif color.lower() == "white":
            return "\x1b[97m"
        else:
            raise ValueError("Unrecognized value received for <color>")

    @staticmethod
    def reset() -> str:
        """Return the ansi sequence to reset the console formatting style"""
        return "\x1b[0m"

    @staticmethod
    def clear() -> str:
        """Return the ansi sequence to clear terminal buffer and scrollback"""
        return "\x1b[H\x1b[2J\x1b[3J"

    @staticmethod
    def paint(text: str, color: str) -> str:
        """Add ansi color sequence to string, return output as string"""
        return Ansi.color(color) + text

    @staticmethod
    def build_prompt(user: str, cwd: str, hostname: str = None) -> str:
        """Assemble shell prompt with ansi sequences, return as bytes.
        Note: this method is intended to be called from within the utils module"""
        if hostname not in (None, ""):
            return "".join((
                Ansi.paint(user, "green"),
                Ansi.paint("@", "white"),
                Ansi.paint(hostname, "green"),
                Ansi.paint(":", "white"),
                Ansi.paint(cwd, "cyan"),
                Ansi.paint("> ", "white")
            ))
        else:
            return "".join((
                Ansi.paint(user, "green"),
                Ansi.paint("::", "white"),
                Ansi.paint(cwd, "cyan"),
                Ansi.paint("> ", "white")
            ))


OPTIONS = (
    {"symbol": "[*]", "color": Ansi.color("cyan")},
    {"symbol": "[+]", "color": Ansi.color("green")},
    {"symbol": "[!]", "color": Ansi.color("yellow")},
    {"symbol": "[x]", "color": Ansi.color("red")}
)


def init_colorama() -> None:
    """Initialize colorama color formatting module"""
    colorama.init(autoreset=True)


def style_prompt(user: str, cwd: str, opsys: str, host: str = None) -> str:
    """Add ansi styling to user prompt, handle posix and nt separately"""
    if opsys != "nt":
        if host is not None:
            return Ansi.build_prompt(user, str(cwd), host)
        else:
            raise ValueError("<hostname> is required if OS is not Windows")
    else:
        return Ansi.build_prompt(user, cwd)


def stdin_status(stdin: str, level: str = "output") -> None:
    """Print specified stdin string to the console. This function is
    intended to be used by Client class for stdin handling"""
    if level == "output":
        opts = OPTIONS[1]
    elif level == "error":
        opts = OPTIONS[3]
    else:
        raise ValueError("Expected <level> to be [output|error]")

    print(opts["color"] + opts["symbol"] + Style.RESET_ALL, end=" ")
    print("stdin " + opts["color"] + "=>" + Style.RESET_ALL, end=" ")
    print(f"[{stdin}]")


def status(stdout: str = "", level: str = "info", stdin: str = None) -> None:
    """Print specified status to stdout at different status levels"""
    if level == "info":
        opts = OPTIONS[0]
    elif level == "output":
        opts = OPTIONS[1]
    elif level == "alert":
        opts = OPTIONS[2]
    elif level == "error":
        opts = OPTIONS[3]
    else:
        raise ValueError("Expected <level> to be [info|alert|output|error]")

    print(opts["color"] + opts["symbol"] + Style.RESET_ALL, end=" ")

    if stdin:
        print(f"[{stdin}] " + opts["color"] + "=>")
    print(stdout)


def throw(text: str = None, kill: bool = True) -> None:
    """Print the exception status to stdout and kill the program"""
    if text is not None:
        print(Fore.LIGHTRED_EX + "[x]", end=" ")
        print(Style.RESET_ALL + text)

    if kill:
        status("Exiting RevShell.", level="info")
        exit(1)


def valid_ipv4(ipaddr: str) -> bool:
    """Try to parse value as IPv4 address, return True if successful"""
    try:
        IPv4Address(ipaddr)
        if not 7 <= len(ipaddr) <= 15:
            return False
        if ipaddr.count(".") != 3:
            return False
    except:
        return False
    else:
        return True


def append(outpath: str, payload) -> None:
    """Append program output to the file path of <payload>"""
    if type(payload) is list:
        for line in payload:
            with open(outpath, "a+") as file:
                file.write(f"{line}\r\n")
    else:
        with open(outpath, "a+") as file:
            file.write(f"{payload}\r\n")
