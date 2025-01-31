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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> cards[i][j];
            }
        }

        for (auto &v : cards)
            sort(v.begin(), v.end());

        int x = 1;
        for (auto &v : cards)
            v.push_back(x++);

        sort(cards.begin(), cards.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] < b[0]; });

        x = -1;
        bool res = true;
        for (int i = 0; i < m; i++)
        {
            bool l = false;
            for (int j = 0; j < n; j++)
            {
                x++;
                if (cards[j][i] != x)
                {
                    cout << "-1" << endl;
                    res = false, l = true;
                    break;
                }
            }
            if (l)
                break;
        }
        if (res)
        {
            for (int i = 0; i < n; i++)
            {
                cout << cards[i][m];
                if (i != n - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }
}