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

        vector<vector<int>> arr(n);
        vector<pair<long long,int>> sums(n);

        int ele;
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> ele;
                sum += ele;
                arr[i].push_back(ele);
            }
            sums[i] = {sum, i};
        }

        sort(sums.begin(), sums.end(), [](pair<long long, int> &a, pair<long long, int> &b) {
            return a.first > b.first;
        });
        

        vector<int> singleArr(n * m);
        int idx = 0;

        for (int i = 0; i < n; i++)
            for(int ele : arr[sums[i].second])
                singleArr[idx++] = ele;

        long long sum = singleArr[0];
        for (int i = 1; i < n * m; i++)
        {
            singleArr[i] = singleArr[i] + singleArr[i - 1];
            sum += singleArr[i];
        }
        cout << sum << endl;
    }
}