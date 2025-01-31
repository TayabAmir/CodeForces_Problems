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
        int n, m1, m2;
        cin >> n >> m1 >> m2;
        vector<vector<int>> f(n, vector<int>(n, 0));
        vector<vector<int>> g(n, vector<int>(n, 0));

        int u, v;
        for (int i = 0; i < m1; i++)
        {
            cin >> u >> v;
            f[u - 1][v - 1] = 1;
            f[v - 1][u - 1] = 1;
        }
        for (int i = 0; i < m2; i++)
        {
            cin >> u >> v;
            g[u - 1][v - 1] = 1;
            g[v - 1][u - 1] = 1;
        }

        int ops = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (f[i][j] == 1 && g[i][j] == 0)
                {
                    f[i][j] = 0, f[j][i] = 0;
                    ops++;
                }
                else if (f[i][j] == 0 && g[i][j] == 1)
                {
                    f[i][j] = 1, f[j][i] = 1;
                    ops++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << f[i][j] << " ";
            } cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << g[i][j] << " ";
            } cout << endl;
        }


        
        cout << ops << endl;
    }
}