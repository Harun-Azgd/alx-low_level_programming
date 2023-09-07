#!/bin/bash
gcc -E $CFILE -o c > runs a C file through the preprocessor and save the result into another file.
                     The C file name will be saved in the variable $CFILE
                     The output should be saved in the file c
gcc -c $CFILE > compiles a C file but does not link.
                The C file name will be saved in the variable $CFILE
                The output file should be named the same as the C file, but with the extension .o instead of .c