#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int zeroCount = 0, oneCount = 0;
        for(char c : s)
            (c == '0') ? zeroCount++ : oneCount++;

        cout << abs(zeroCount-oneCount) << endl;
    }
}