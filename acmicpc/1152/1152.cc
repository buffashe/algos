#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i = 0;
    while (!cin.eof())
    {
        string a;
        cin >> a;
        if (a == "")
        {
            i--;
        }
        i++;
    }

    cout << i;

    return 0;
}
