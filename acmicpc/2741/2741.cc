#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int i = 1;

    while (i <= a)
    {
        printf("%d", i);

        if (i++ != a)
        {
            printf("\n");
        }
    }

    return 0;
}
