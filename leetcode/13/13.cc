#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int symDecode(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        break;
    }
    return -1;
}

int romanToInt(string s)
{
    int conv[16] = {0};

    for (size_t i = 0; i < s.length(); i++)
    {
        conv[i] = symDecode(s[i]);
    }

    int res = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        int nextNum = conv[i + 1];
        switch (conv[i])
        {
        case 1:
            if ((nextNum == 5) || (nextNum == 10))
            {
                res += nextNum - 1;
                i++;
            }
            else
            {
                res += 1;
            }
            break;
        case 10:
            if ((nextNum == 50) || (nextNum == 100))
            {
                res += nextNum - 10;
                i++;
            }
            else
            {
                res += 10;
            }
            break;
        case 100:
            if ((nextNum == 500) || (nextNum == 1000))
            {
                res += nextNum - 100;
                i++;
            }
            else
            {
                res += 100;
            }
            break;
        default:
            res += conv[i];
            break;
        }
    }

    return res;
}

int main()
{
    printf("%d", romanToInt("MMMDCCCLXXXVIII"));
    return 0;
}
