#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string dict;
    cin >> dict;

    int duration = 0;

    for (char c : dict)
    {
        int tempDur = 10;
        switch (c)
        {
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
        case 'T':
        case 'U':
        case 'V':
            duration--;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            duration -= 2;
            break;
        case 'M':
        case 'N':
        case 'O':
            duration -= 3;
            break;
        case 'J':
        case 'K':
        case 'L':
            duration -= 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            duration -= 5;
            break;
        case 'D':
        case 'E':
        case 'F':
            duration -= 6;
            break;
        case 'A':
        case 'B':
        case 'C':
            duration -= 7;
            break;

        default:
            break;
        }
        duration += tempDur;
    }

    cout << duration;
    return 0;
}
