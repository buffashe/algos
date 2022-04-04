#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << a * (b % 10) << endl << a * ((b % 100) / 10) << endl << a * ((b % 1000) / 100) << endl << a * b;

    return 0;
}