#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int> arr)
{
    int twos = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2) twos++;
        if(twos == n/2) return i+1;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, twos = 0;
        cin >> n;
        vector<int> arr(n);
        for (auto &itr : arr)
        {
            cin >> itr;
            if (itr == 2)
                twos++;
        }
        if (twos == 0)
            cout << 1 << endl;
        else if(twos % 2 == 0)
            cout << solve(twos, arr) << endl;
        else
            cout << -1 << endl;
    }
}