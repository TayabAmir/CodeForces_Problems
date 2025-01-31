#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), diff(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int smallestPositive = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            diff[i] = a[i] - b[i];

            if (diff[i] < 0)
            {
                count++;
            }
            if (diff[i] > 0 && diff[i] < smallestPositive)
            {
                smallestPositive = diff[i];
            }
        }
        if (count > 1)
        {
            cout << "No" << endl;
            continue;
        }
        int neggap = 1;
        for (int i = 0; i < n; i++)
        {
            if (diff[i] < 0)
            {
                neggap = abs(diff[i]);
            }
        }

        if (neggap <= smallestPositive)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}