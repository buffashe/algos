#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int c;
    cin >> c;

    int a, b;
    for (size_t i = 0; i < c;)
    {
        cin >> a >> b;
        cout << a + b;
        if (++i != c)
        {
            cout << endl;
        }
    }

    return 0;
}
