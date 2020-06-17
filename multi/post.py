import os
import socket
import subprocess
import ipaddress

from scapy.layers.l2 import ARP
from scapy.layers.inet import (ICMP, IP, TCP)
from scapy.all import (read_routes, read_routes6)
from scapy.sendrecv import (sr, sr1, srp)
from prettytable import PrettyTable

from multi import utils


def banner_grab(target: str, port: int) -> str:
    """Grab the specified TCP application port banner"""
    sock = socket.socket()

    try:
        sock.connect((target, port))
        data = sock.recv(1024).split()[0]
    except socket.timeout:
        banner = None
    else:
        banner = data.decode()
    finally:
        sock.close()

    return banner


def valid_ipv4(ipaddr: str) -> bool:
    """Check a string to see if it can be parsed as IPv4 address"""
    try:
        ipaddress.IPv4Address(ipaddr)
        if ipaddr.count(".") != 3:
            raise
    except:
        return False
    else:
        return True


def active_host(ipaddr: str) -> bool:
    """Ping a target host using the specified IPv4 address.
    Return true if target responds to our ICMP probe"""
    packet = IP(dst=ipaddr) / ICMP()
    response = sr1(packet, timeout=5, verbose=0)

    if response:
        return True
    else:
        return False
