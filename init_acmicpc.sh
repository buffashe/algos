#!/bin/sh
# https://unix.stackexchange.com/questions/503487/why-does-echo-e-n-give-me-two-blank-lines-instead-of-one
# https://linuxize.com/post/bash-check-if-file-exists/

if [ -d "acmicpc/$1" ]; then
    echo "acmicpc/$1 exists."
else 
    mkdir acmicpc/$1
    echo "#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    return 0;
}" > acmicpc/$1/$1.cc
    printf '' > acmicpc/$1/input$1.txt
fi