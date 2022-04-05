#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string line, S;
    int R, T;

    cin >> T;

    for (size_t i = 0; i < T; i++)
    {
        cin >> R;
        cin >> S;

        for (char c : S)
        {
            for (size_t i = 0; i < R; i++)
            {
                printf("%c", c);
            }
        }
        printf("\n");
    }

    return 0;
}
