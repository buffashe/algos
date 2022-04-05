#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int letterCnt['z' - 'a' + 1] = {0};

        for (char c : magazine) {
            letterCnt[c - 'a']++;
        }

        for (char c : ransomNote) {
            if (--letterCnt[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;

    printf("%d", s.canConstruct("a", "b"));

    return 0;
}
