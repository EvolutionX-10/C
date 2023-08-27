#!/bin/bash

# write a bash script to compile all c files using gcc
# and run the executable file
echo "Compiling all C files in the current directory..."

for file in *.c
do
	gcc $file -Wall -o ${file%.*} -lm
	echo "Compiled ${file%.*}"
	./${file%.*}
	printf "\n"
done
echo "All files are compiled!"
# wait for 4 seconds and then clear screen
sleep 3
clear
