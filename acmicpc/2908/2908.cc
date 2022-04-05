#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;
    // char A[4] = {0}, B[4] = {0};
    // char A[4] = {2, 2, 1, 0}, B[4] = {2, 3, 1, 0};
    int ia, ib;
    cin >> A >> B;
    char temp;

    temp = A[0];
    A[0] = A[2];
    A[2] = temp;
    temp = B[0];
    B[0] = B[2];
    B[2] = temp;

    ia = atoi(A.c_str());
    ib = atoi(B.c_str());

    if (ia > ib)
    {
        cout << ia;
    }
    else
    {
        cout << ib;
    }

    return 0;
}
