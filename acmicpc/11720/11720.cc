#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    char *arr = (char *)malloc(sizeof(char) * N);

    scanf("%s", arr);
    for (size_t i = 0; i < N; i++)
    {
        sum += arr[i] - '0';
    }

    cout << sum;

    return 0;
}
