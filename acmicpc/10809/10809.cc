#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr['z' - 'a' + 1] = {0};
    fill_n(arr, 'z' - 'a' + 1, -1);
    string S;
    cin >> S;

    for (size_t i = 0; i < S.length(); i++)
    {
        if (arr[S[i] - 'a'] == -1)
        {
            arr[S[i] - 'a'] = i;
        }
    }

    for (char c : arr)
    {
        printf("%d ", c);
    }

    return 0;
}
