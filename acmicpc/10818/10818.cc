#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, min = 0, max = 0;
    cin >> n;
    int arr[n];

    int i = 0;
    while (!cin.eof())
    {
        cin >> arr[i++];
    }

    cout << *min_element(arr, arr + n) << " " << *max_element(arr, arr + n);

    return 0;
}
