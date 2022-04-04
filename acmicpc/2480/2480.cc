#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((a == b) && (b == c))
    {
        cout << 10000 + (a * 1000);
    }
    else if ((a != b) && (b != c) && (a != c))
    {
        cout << max(a, max(b, c)) * 100;
    }
    else
    {
        int off = 1000;
        if ((a == b) && (b != c) && (a != c))
        {
            off += a * 100;
        }
        else if ((a != b) && (b == c) && (a != c))
        {
            off += b * 100;
        }
        else
        {
            off += c * 100;
        }

        cout << off;
    }

    return 0;
}
