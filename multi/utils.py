from typing import Union
from ipaddress import IPv4Address

from colorama import (Style, Fore)
from django.core.exceptions import ValidationError
from django.core.validators import (
    URLValidator,
    validate_ipv4_address
)


def status(stdout: str, level="info", stdin=None) -> None:
    """Print specified status to stdout at different status levels"""
    if level == "info":
        opts = {"symbol": "[*]", "color": Fore.LIGHTCYAN_EX}
    elif level == "alert":
        opts = {"symbol": "[!]", "color": Fore.LIGHTYELLOW_EX}
    elif level == "output":
        opts = {"symbol": "[+]", "color": Fore.LIGHTGREEN_EX}
    elif level == "error":
        opts = {"symbol": "[x]", "color": Fore.RED}
    else:
        raise ValueError("Expected <level> to be [info|alert|output|error]")

    print(opts["color"] + opts["symbol"] + Style.RESET_ALL, end=" ")

    if stdin:
        print(f"[{stdin}]", end=" ")
        print(opts["color"] + "=>")

    print(Style.RESET_ALL + stdout)


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
    if type(payload) is list:
        for line in payload:
            with open(outpath, "a+") as file:
                file.write(f"{line}\n")
    else:
        with open(outpath, "a+") as file:
            file.write(f"{payload}\n")
