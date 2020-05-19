from typing import Union
from ipaddress import IPv4Address
from colorama import (Style, Fore)
from django.core.exceptions import ValidationError
from django.core.validators import (
    URLValidator,
    validate_ipv4_address
)


def out_string(input_list: list) -> str:
    string = ""
    for item in input_list:
        string = string + item

    return string


def status(stdout: str, stdin: str = None, level: str = "info") -> None:
    """Print specified status to stdout at different verbosity levels"""
    if level == "info":
        opts = {"symbol": "[*]", "color": Fore.LIGHTCYAN_EX}
    elif level == "alert":
        opts = {"symbol": "[!]", "color": Fore.LIGHTYELLOW_EX}
    elif level == "output":
        opts = {"symbol": "[+]", "color": Fore.LIGHTGREEN_EX}
    else:
        raise ValueError("Expected <level> to be [info|alert|output]")

    print(opts["color"] + opts["symbol"], end=" ")
    print(Style.RESET_ALL, end="")

    if stdin is not None:
        print(f"[{stdin}]", end=" ")
        print(opts["color"] + "=>")
        print(Style.RESET_ALL + stdout)
    else:
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
        #status("The application will now be terminated.", "alert")
        status("The application will now be terminated.", level="info")
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


def echo_probe(target: str) -> str:
    """Send an ICMP echo-request to designated target"""
    echo_request = IP(dst=target) / ICMP()
    echo_reply = sr1(echo_request, timeout=5, verbose=0)

    if echo_reply is None:
        return "down"
    else:
        return "up"
