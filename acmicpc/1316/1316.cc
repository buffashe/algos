#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

bool isGroupWord(string s)
{
    bool appearance['z' - 'a' + 1];
    fill(appearance, appearance + 'z' - 'a' + 1, false);
    char prev = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (prev != s[i])
        {
            if (!appearance[s[i] - 'a'])
            {
                appearance[s[i] - 'a'] = true;
                prev = s[i];
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int N;
    int groupWordCnt = 0;
    cin >> N;

    for (size_t i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if (isGroupWord(str))
        {
            groupWordCnt++;
        }
    }

    cout << groupWordCnt;

    return 0;
}
