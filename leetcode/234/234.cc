#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        int a;
        ListNode *temp = head;
        stack<int> stk;

        while (temp != nullptr)
        {
            stk.push(temp->val);
            temp = temp->next;
        }

        while (head != nullptr)
        {
            a = stk.top();
            stk.pop();

            if (head->val != a)
            {
                return false;
            }
            head = head->next;
        }

        return true;
    }
};

int main()
{
    Solution s;

    return 0;
}
