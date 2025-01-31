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
        cin >> n >> x;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int maxFuel = arr[0];
        for(int i = 1; i < n; i++)
            maxFuel = max(maxFuel, arr[i] - arr[i-1]);
        
        cout << max(maxFuel, (x - arr[n-1]) * 2) << endl;   
    }
}