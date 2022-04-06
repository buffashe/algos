#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int getBEP(int a, int b, int c)
{
    if (b >= c)
    {
        return -1;
    }

    return (a / (c - b) + 1);
}

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << getBEP(A, B, C);

    return 0;
}
