#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;

    while ((cin >> a >> b) && ((a != 0) && (b != 0)))
    {
        cout << a + b << endl;
    }

    return 0;
}
