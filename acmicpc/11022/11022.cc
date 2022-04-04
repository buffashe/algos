#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, t;

    scanf("%d", &t);

    int i = 1;
    while (i <= t)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d", i, a, b, a + b);

        if (i++ < t)
        {
            printf("\n");
        }
    }

    return 0;
}
