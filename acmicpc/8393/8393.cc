#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;

    cin >> a;

    int r = 0;
    while (a > 0)
    {
        r += a--;
    }

    cout << r;

    return 0;
}
