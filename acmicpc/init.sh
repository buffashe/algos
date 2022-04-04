#!/bin/sh
# https://unix.stackexchange.com/questions/503487/why-does-echo-e-n-give-me-two-blank-lines-instead-of-one
mkdir $1
printf '#include <cstdio>\n\nint main() {\n    \n    return 0;\n}' > $1/$1.cc
printf '' > $1/input.txt