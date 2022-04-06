#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int c;
    cin >> c;

    int i = 1;
    while (c > 1)
    {
        c = c - (6 * i++);
    }

    cout << i;

    return 0;
}
