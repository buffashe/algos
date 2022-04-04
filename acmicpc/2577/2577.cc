#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[10] = {0};
    string resStr;
    int a, b, c, res;

    cin >> a >> b >> c;
    res = a * b * c;
    resStr = to_string(res);

    for (size_t i = 0; i < resStr.length(); i++)
    {
        arr[(resStr[i] - '0')]++;
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
