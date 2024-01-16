#!/bin/bash
wget -P /tmp https://github.com/KARAM022/alx-low_level_programming/0x18-dynamic_libraries/libgaga.so
export LD_PRELOAD=/tmp/libgaga.so