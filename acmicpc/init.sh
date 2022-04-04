#!/bin/sh
# https://unix.stackexchange.com/questions/503487/why-does-echo-e-n-give-me-two-blank-lines-instead-of-one
# https://linuxize.com/post/bash-check-if-file-exists/

if [ -d "$1" ]; then
    echo "$1 exists."
else 
    mkdir $1
    printf '#include <cstdio>\n#include <cstdlib>\n#include <iostream>\n#include <algorithm>\n\nusing namespace std;\n\nint main() {\n    \n    return 0;\n}' > $1/$1.cc
    printf '' > $1/input$1.txt
fi