#!/usr/bin/python3
import argparse

from multi import utils
from multi.nodes.server import Server
from multi.nodes.client import Client

# TODO: add netcat compatibility mode

parser = argparse.ArgumentParser(
    prog="revshell",
    description="RevShell: Python3 TCP reverse command shell application",
    usage="revshell [-h] [-v] [-d] [-l] [-e EXEC] [-p PORT] [TARGET]"
)

parser.add_argument(
    "TARGET", type=str, nargs="?",
    help="specify the target/listener IPv4 address"
)

parser.add_argument(
    "-p", "--port", type=int,
    help="specify the TCP port to use as socket"
)

parser.add_argument(
    "-e", "--exec", type=str,
    help="specify the command shell executable"
)

parser.add_argument(
    "-l", "--listen", action="store_true",
    help="listen for incoming TCP connections"
)

parser.add_argument(
    "-v", "--verbose", action="store_true",
    help="be verbose with console output stream"
)

parser.add_argument(
    "-d", "--debug", action="store_true",
    help="be verbose + output shell commands"
)

args = parser.parse_args()

target: str = args.TARGET
port: int = args.port
shell: str = args.exec
listen: bool = args.listen
verbose: bool = args.verbose
debug: bool = args.debug

if __name__ == "__main__":
    if (target is None) & (not listen):
        msg = "at least one of the following must be filled: "
        parser.error(msg + "target, -l/--listen")
        exit(1)

    utils.init_colorama()

    if target is not None:
        if not utils.ipv4_parse(target):
            utils.throw("Value for [target] is not a valid IPv4 address")
    else:
        target = "0.0.0.0"

    if port is not None:
        try:
            if not 1 <= int(port) <= 65535:
                raise ValueError()
        except ValueError:
            utils.throw("Value for [port] must be [1 <= port <= 65535]")
    else:
        port = 4444

    if shell is not None:
        shell, shell_name = Client.get_exec(shell)
    else:
        shell, shell_name = Client.get_exec()

    if verbose:
        utils.status(f"address => {target}")
        utils.status(f"port => {port}")

        if not listen:
            utils.status("node => client")
            utils.status(f"shell => {shell_name}")
        else:
            utils.status("node => server")

    if listen:
        handler = Server(target, port, shell, verbose, debug)
        handler.listen()
    else:
        handler = Client(target, port, shell, verbose, debug)
        handler.connect()
