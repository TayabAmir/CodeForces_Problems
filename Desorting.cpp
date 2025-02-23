#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>
using namespace std;

int solve(vector<int> a, int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; ++i)
        ans = min((abs(a[i] - a[i + 1])) / 2, ans);
    return ans+1;
}

bool isSorted(vector<int> a, int n)
{
    for (int i = 0; i < n - 1; ++i)
        if (a[i] > a[i + 1])
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &itr : a)
            cin >> itr;

        if (!isSorted(a, n))
            cout << 0 << endl;
        else
            cout << solve(a, n) << endl;
    }
}