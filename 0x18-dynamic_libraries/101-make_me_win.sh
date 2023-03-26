#!/bin/bash
wget -P /tmp 0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
