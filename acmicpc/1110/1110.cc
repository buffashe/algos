#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, i = 0;

    cin >> a;
    int sum = a;

    do
    {
        sum = ((sum % 10) * 10) + ((sum / 10) + (sum % 10)) % 10;
        i++;
    } while (sum != a);

    cout << i;

    return 0;
}
