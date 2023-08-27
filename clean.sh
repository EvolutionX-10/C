#!/bin/bash
# for identifier files
# run
# find -name "*Zone*" -type f -delete
for file in *
do
	# if the file is an executable file
	# and does not have .sh extension
	if [ -x $file ] && [ ${file##*.} != "sh" ];
	then
		rm $file
		echo "Deleted $file"
	fi
done
