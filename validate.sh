#!/bin/bash

echo "Validating all scripts..."

for file in *.sh
do
	chmod +x $file
	echo "Validated $file"
done
sleep 3
clear
