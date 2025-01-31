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
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        bool res = true;
        // for(int i = 0; i < n - 1; i++){
        //     if(arr[i] <= arr[i+1]) i++;
        //     else{
        //         res = false;
        //         break;
        //     }
        // }

        if(arr[0] > arr[1]) // NO

        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}