#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, a;
    string str = "";

    cin >> n >> x;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        if (a < x)
        {
            str += to_string(a) + " ";
        }
    }

    cout << str;

    return 0;
}
