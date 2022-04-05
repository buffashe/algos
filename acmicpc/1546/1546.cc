#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int count, idx = 0;
    cin >> count;
    int score[count];

    double i = 0, max = 0, avg = 0;
    while (!cin.eof())
    {
        cin >> i;
        if (i > max)
        {
            max = i;
        }
        score[idx++] = i;
    }

    for (size_t idx = 0; idx < count; idx++)
    {
        avg += (score[idx] / max) * 100;
    }

    printf("%g", avg / (double)count);

    return 0;
}
