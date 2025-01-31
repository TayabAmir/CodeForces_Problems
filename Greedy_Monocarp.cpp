#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k == 0)
                break;
            if (k - v[i] < 0)
            {
                sum += k, k = 0;
                break;
            }
            k -= v[i];
        }
        cout << sum + k << endl;
    }
}