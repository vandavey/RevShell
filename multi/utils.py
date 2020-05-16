from scapy.all import *
from colorama import Style, Fore
from django.core.validators\
    import validate_ipv4_address, URLValidator
from django.core.exceptions import ValidationError
from ipaddress import IPv4Address


def out_string(input_list: list) -> str:
    string = ""
    for item in input_list:
        string = string + item

    return string


def status(text: Union[str, list], level: str = "info") -> None:
    """Print specified status to stdout"""
    if level == "info":
        opts = {"symbol": "[*]", "color": Fore.LIGHTCYAN_EX}
    elif level == "warn":
        opts = {"symbol": "[!]", "color": Fore.YELLOW}
    elif level == "output":
        opts = {"symbol": "[+]", "color": Fore.LIGHTGREEN_EX}
    else:
        raise ValueError("<level> must equal 'info' or 'warn'")

    if type(text) is list:
        tlist = [str(x) for x in text]
    else:
        tlist = [str(text)]

    for string in tlist:
        print(opts["color"] + opts["symbol"], end=" ")
        print(Style.RESET_ALL, end="")
        print(string)


def throw(text: Union[str, list] = None, terminate: bool = True) -> None:
    """Print the error status to stdout and terminate the program"""
    if text is not None:
        if type(text) is list:
            tlist = [str(x) for x in text]
        else:
            tlist = [str(text)]

    for string in tlist:
        print(Fore.LIGHTRED_EX + "[x]", end=" ")
        print(Style.RESET_ALL, end="")
        print(string)

    if terminate:
        status("The script will now be terminated.", "warn")
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


def get_banner(target, dport: int) -> Union[str, None]:
    sock = socket.socket()

    try:
        sock.connect((target, dport))
        data = sock.recv(1024).split()[0]
    except socket.timeout:
        banner = None
    else:
        banner = data.decode()
    finally:
        sock.close()

    return banner
