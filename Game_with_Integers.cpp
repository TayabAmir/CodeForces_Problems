#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string solve(int n){
    return (n % 3 == 0) ? "Second" : "First";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}