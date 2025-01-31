#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x] += 1;
        }
        int score = 0;
        for (auto itr : mp){
            score += (itr.second / 2);
        }
        cout << score << endl;
    }
}