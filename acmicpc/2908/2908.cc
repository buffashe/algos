#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;
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
