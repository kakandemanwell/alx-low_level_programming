#!/bin/bash
gcc -c ./*.c

# Create the static library liball.a from the object files
ar -rcs liball.a ./*.o

