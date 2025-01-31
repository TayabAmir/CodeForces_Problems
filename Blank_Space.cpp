#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;

        int ans = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
            {
                ans = max(ans, count);
                count = 0;
            }
            else
                count++;
        }

        cout << max(ans, count) << endl;
    }
}