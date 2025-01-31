#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solve(string s){
    for(int i = 0; i < s.length();){
        if(s[i] == '.'){
            int count = 0;
            while(s[i] == '.'){
                count++, i++;
                if(count == 3) return 2;
            }
        } else i++;
    }
    return count(s.begin(), s.end(), '.');
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << solve(s) << endl;
    }
}