#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#define DICTCOUNT 8

using namespace std;

int main()
{
    string str;
    string dict[DICTCOUNT] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    cin >> str;

    int idx = 0;
    while (idx < DICTCOUNT)
    {
        size_t pos = str.find(dict[idx]);
        if (pos != string::npos)
        {
            str.replace(pos, dict[idx].length(), ".");
            idx = 0;
        }
        else
        {
            idx++;
        }
    }

    cout << str.length();

    return 0;
}
