#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, t;

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d %d", &a, &b);
        printf("%d", a + b);
        if (--t != 0)
        {
            printf("\n");
        }
    }

    return 0;
}
