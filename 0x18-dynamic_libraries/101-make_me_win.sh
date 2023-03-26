#!/bin/bash
wget -P /tmp https://github.com/kakandemanwell/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
