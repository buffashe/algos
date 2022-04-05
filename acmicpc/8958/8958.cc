#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>

#define ARRSIZE 81

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    char a[ARRSIZE];

    int streak, score;
    for (int i = 0; i < cases; i++)
    {
        streak = 0;
        score = 0;
        std::fill(a, a + ARRSIZE, 0);
        cin >> a;
        for (char c : a)
        {
            if (c == 'O')
            {
                streak++;
                score += streak;
            }
            else
            {
                streak = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}
