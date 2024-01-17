#!/bin/bash

gcc *.c -c -fpic
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
