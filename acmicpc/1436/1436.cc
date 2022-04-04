#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long a, count = 0;
    string str;
    string strf = "666";

    cin >> a;

    for (long i = 0; i <= 9223372036854775807L; i++)
    {
        str = to_string(i);
        if (str.find(strf) != string::npos) {
            if (++count == a) {
                cout << i;
                break;
            }
        }
    }
    
    return 0;
}