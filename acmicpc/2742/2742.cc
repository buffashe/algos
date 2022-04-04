#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a > 0)
    {
        printf("%d", a);

        if (a-- > 1)
        {
            printf("\n");
        }
    }

    return 0;
}
