#!/bin/bash

original_dir=$PWD
cd $1
rm -f *.tmp
cd $original_dir
echo "All .tmp files successfully deleted from $1"

