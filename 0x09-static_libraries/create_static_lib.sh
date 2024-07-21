#!/bin/bash
#Script to create a static library called liball.a ffrom all .c files in the current directory.

#Compile each .c file to an object file
for file in *.c
do
	gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Generating an index for the library.
ranlib liball.a

# Cleanup the object files.
rm *.o

