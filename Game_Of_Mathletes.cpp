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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        int i = 0, j = n - 1, count = 0;
        while (i < j)
        {
            if(arr[i] + arr[j] == k) i++, j--,count++;
            else if(arr[i] + arr[j] < k) i++;
            else j--; 
        }
        cout << count << endl;
    }
}