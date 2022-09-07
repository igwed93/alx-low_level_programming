#!/bin/bash
wget -P /tmp/ https://github.com/igwed93/alx-low_level_programming/raw/master/0x18-dynamic_libraries/my_func.so
export LD_PRELOAD=/tmp/my_func.so
