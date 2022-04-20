#!/bin/sh
# https://unix.stackexchange.com/questions/503487/why-does-echo-e-n-give-me-two-blank-lines-instead-of-one
# https://linuxize.com/post/bash-check-if-file-exists/

if [ -d "programmers/$1" ]; then
    echo "programmers/$1 exists."
else 
    mkdir programmers/$1
    echo "#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    
    return 0;
}" > programmers/$1/$1.cc
    printf '' > programmers/$1/input$1.txt
fi
