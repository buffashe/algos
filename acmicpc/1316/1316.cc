#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

bool isGroupWord(string s)
{
    /*
    int dict['z' - 'a' + 1] = {0};
    char prev = s[0];

    for (size_t i = 'a'; i < 'z'; i++)
    {

    }
    

    for (size_t i = 0; i < s.length(); i++)
    {
        
    }
    */
    

    return false;
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

    return 0;
}
