#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int h, m;

    cin >> h >> m;

    if ((m = m - 45) < 0)
    {
        m = m + 60;
        h--;
        if (h < 0)
        {
            h = 23;
        }
    }

    cout << h << " " << m;

    return 0;
}
