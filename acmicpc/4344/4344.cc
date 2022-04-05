#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int cases, students, temp, supCount;
    double avg;
    string line;
    cin >> cases;

    for (size_t i = 0; i < cases; i++)
    {
        cin >> students;
        int scores[students];

        avg = 0;

        for (size_t i = 0; i < students; i++)
        {
            cin >> temp;
            scores[i] = temp;
            avg += temp;
        }

        avg = avg / students;
        supCount = 0;

        for (size_t i = 0; i < students; i++)
        {
            if (scores[i] > avg)
            {
                supCount++;
            }
        }

        printf("%0.3f%%\n", ((double)supCount / (double)students) * 100);
    }

    return 0;
}
