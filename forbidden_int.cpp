#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(int n, int k, int x)
{
    if (k == 1 && x == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (x != 1)
    {
        cout << "YES" << endl
             << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << "YES" << endl
             << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        if (k == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl
                 << ((n - 3) / 2) + 1 << endl;
            for (int i = 0; i < (n - 3) / 2; i++)
                cout << 2 << " ";
            cout << 3 << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        solve(n, k, x);
    }
}