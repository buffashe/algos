#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#define SELFNUMLIMIT 10000

using namespace std;

int arr[SELFNUMLIMIT + 1];

int d(int arg)
{
    return arg / 1000 + (arg % 1000) / 100 + (arg % 100) / 10 + arg % 10 + arg;
}

int main()
{
    int a;

    for (int i = 0; i < SELFNUMLIMIT; i++)
    {
        if (i < SELFNUMLIMIT)
        {
            a = d(i);
            if (a < SELFNUMLIMIT)
            {
                arr[a] = true;
            }
        }
    }

    for (int i = 1; i < SELFNUMLIMIT; i++)
    {
        if (!arr[i])
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
