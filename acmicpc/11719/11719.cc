#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char a;

    while ((a = getc(stdin)) != EOF)
    {
        printf("%c", a);
    }
    
    return 0;
}
