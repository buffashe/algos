#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 1; k < n - i; k++)
            {
                printf(" ");
            }
        for (size_t j = 0; j <= i; j++)
        {
            printf("*");
        }
        if (i < n - 1)
        {
            printf("\n");
        }
    }

    return 0;
}
