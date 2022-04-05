#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[42] = {0};

    int t;
    while (!cin.eof())
    {
        cin >> t;
        arr[t % 42] = 1;
    }

    t = 0;
    for (auto i : arr)
    {
        t += i;
    }

    cout << t;

    return 0;
}
