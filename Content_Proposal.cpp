#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int> a, vector<int> b)
{
    auto itr = lower_bound(b.begin(), b.end(), a[0]);
    int count = itr - b.begin();
    int ai = 0;
    while(itr != b.end()){
        a[ai] <= *itr ? ai++ : count++;
        itr++;
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
        vector<int> a(n), b(n);
        for (auto &itr : a)
            cin >> itr;
        for (auto &itr : b)
            cin >> itr;

        cout << solve(n, a, b) << endl;
    }
}