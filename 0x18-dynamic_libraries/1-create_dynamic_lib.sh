#!/bin/bash

#get the list of all .c files
CFILES = $(ls *.c)

#compile all the .c files into object files

for FILE in $CFILES
do
	gcc -c -fPIC $FILE
done

#link the object files into a single shared library liball.so
gcc - shared -o liball.so *.o

#clean the object files
rm -f *.o
