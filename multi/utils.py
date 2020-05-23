from typing import Union
from ipaddress import IPv4Address

import colorama
from colorama import (Style, Fore)

class Ansi(object):
    """Formatting class containing Ansi escape sequences"""
    @staticmethod
    def color(color: str) -> str:
        """Get the ansii code the specified <color>"""
        if color.lower() == "red":
            return "\x1b[91m"
        elif color.lower() == "green":
            return "\x1b[92m"
        elif color.lower() == "yellow":
            return "\x1b[93m"
        elif color.lower() == "cyan":
            return "\x1b[96m"
        else:
            raise ValueError("Unrecognized value received for <color>")

    @staticmethod
    def reset() -> bytes:
        """Ansi sequence to reset the console formatting style"""
        return b"\x1b[0m"

    @staticmethod
    def clear() -> bytes:
        """Ansi sequence to clear terminal buffer and scrollback"""
        return b'\x1b[H\x1b[2J\x1b[3J'


def init_colorama() -> None:
    """Initialize colorama formatting class"""
    colorama.init(autoreset=True)


def style_prompt(prompt: str) -> bytes:
    """"""


def status(stdout: str, level="info", stdin=None) -> None:
    """Print specified status to stdout at different status levels"""
    if level == "info":
        opts = {"symbol": "[*]", "color": Ansi.color("cyan")}
    elif level == "alert":
        opts = {"symbol": "[!]", "color": Ansi.color("yellow")}
    elif level == "output":
        opts = {"symbol": "[+]", "color": Ansi.color("green")}
    elif level == "error":
        opts = {"symbol": "[x]", "color": Ansi.color("red")}
    else:
        raise ValueError("Expected <level> to be [info|alert|output|error]")

    print(opts["color"] + opts["symbol"] + Style.RESET_ALL, end=" ")

    if stdin:
        print(f"[{stdin}]", end=" ")
        print(opts["color"] + "=>")

    print(stdout)


def throw(text: Union[str, list] = None, kill: bool = True) -> None:
    """Print the error status to stdout and kill the program"""
    if text is not None:
        if type(text) is list:
            tlist = [str(x) for x in text]
        else:
            tlist = [str(text)]

        for string in tlist:
            print(Fore.LIGHTRED_EX + "[x]", end=" ")
            print(Style.RESET_ALL + string)

    if kill:
        status("Exiting RevShell.", level="info")
        exit(1)


def ipv4_parse(ipaddr: str) -> bool:
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
                file.write(f"{line}\n")
    else:
        with open(outpath, "a+") as file:
            file.write(f"{payload}\n")
