#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string dict;
    int arr['Z' - 'A' + 1] = {0};
    cin >> dict;
    transform(dict.begin(), dict.end(), dict.begin(), ::toupper);

    for (char c : dict)
    {
        arr[c - 'A']++;
    }

    int max = arr[0];
    int maxInd = 0;
    for (size_t i = 0; i < 'Z' - 'A' + 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxInd = i;
        }
    }

    int count = 0;
    for (int b : arr)
    {
        if (b == max)
        {
            count++;
        }
    }

    if (count == 1)
    {
        printf("%c", ('A' + maxInd));
    }
    else
    {
        printf("?");
    }

    return 0;
}
