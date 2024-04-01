#!/bin/bash

set -e
set -u

filesdir=$1
searchstr=$2
home=$PWD

if [ "$filesdir" == "" ] | [ "$searchstr" == "" ]; then
    echo "one or more of the specified parameters was blank"
    exit 1
fi

cd $filesdir
filecount="$(ls -1 | wc -l)"
stringcount="$(grep -R $searchstr $filesdir | wc -l)"
cd $home
echo "The number of files are $filecount and the number of matching lines are $stringcount"
exit 0