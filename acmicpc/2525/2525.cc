#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int h, m, d;

    cin >> h >> m;
    cin >> d;

    int tm = (((h * 60) + m) + d);

    cout << (tm % 1440) / 60 << " " << (tm % 1440) % 60;

    return 0;
}
