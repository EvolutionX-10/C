#!/bin/bash

# write a bash file to take one input of one file and compile it using gcc
# and run the executable file

gcc $1 -Wall -o ${1%.*}.exe -lm
./${1%.*}.exe
rm ${1%.*}.exe
