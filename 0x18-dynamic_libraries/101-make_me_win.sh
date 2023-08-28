#!/bin/bash
wget -P ../ https://github.com/unawarexi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=../win.so
