#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;

    cin >> a;

    for (size_t i = 1; i <= 9; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }

    return 0;
}
