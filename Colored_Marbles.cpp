#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }

        int alice = 0;
        bool t = true;
        
        for (auto itr : mp)
        {
            if (itr.second > 1)
            {
                alice++;
            }
            else
            {
                if (t)
                    alice += 2;
                t = !t;
            }
        }
        cout << alice << endl;
    }
}