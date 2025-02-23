#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solve(string s){
    int i = 0, count = 0;
    while(i < s.length()){
        char c = s[i];
        while(s[i] == c) i++;
        count++;
    }
    return count;
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

        int ans = solve(s);
        
        if(s[0] == '1')
            cout << ans << endl;
        else
            cout << ans-1 << endl;
    }
}