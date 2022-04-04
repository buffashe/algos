#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i = 1, max = 0, maxpos = 1;

    while (!cin.eof())
    {
        int t;
        cin >> t;

        if (t > max)
        {
            max = t;
            maxpos = i;
        }
        i++;
    }

    cout << max << endl
         << maxpos;
    return 0;
}
