#!/bin/bash
gcc -c -Wall -Werror -pedantic -Wextra *.c
ar -rcs liball.a *.o
