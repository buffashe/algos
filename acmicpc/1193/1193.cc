#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i;
    for (i = 1; i < N; i++)
    {
        N -= i;
    }

    if (i % 2 == 0)
    {
        cout << N << "/" << i + ((1 - N));
    }
    else
    {
        cout << i + ((1 - N)) << "/" << N;
    }

    return 0;
}
