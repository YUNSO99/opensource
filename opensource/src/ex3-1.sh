#!/bin/bash
i=$1
j=0
while (( ${j} < $i ))
do
	echo "hello world"
	j=$(($j+1))
done
