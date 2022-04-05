#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

bool h(int n)
{
    if (n < 100)
    {
        return true;
    }
    int a, b, c; // 100, 10, 1

    a = n / 100;
    b = n % 100 / 10;
    c = n % 10;

    if (a - b == b - c)
    {
        return true;
    }

    return false;
}

int hsCount(int N)
{
    int count = 0;
    for (size_t i = 1; i <= N; i++)
    {
        if (h(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << hsCount(n);

    return 0;
}
