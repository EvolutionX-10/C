#!/bin/bash
for file in *
do
    if [ -f "$file" ] && [ "${file##*.}" = "exe" ]; then
        rm "$file"
        echo "Deleted $file"
    fi
done