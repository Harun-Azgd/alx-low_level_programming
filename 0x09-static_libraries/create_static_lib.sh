#!/bin/bash
gcc -wall -pendantic -Werror -Wextra -o *.c
ar -rc liball.a *.c
ranlib liball.a
