#include <iostream>
#include <cmath>
#include <map>
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

        map<int,int> mp;
        
        int ele;
        for(int i = 0; i < n; i++){
            cin >> ele;
            mp[ele]++;
        }    

        int maxEle = INT_MIN;
        for(auto &itr : mp)
            if(itr.second > maxEle)
                maxEle = itr.second;

        cout << n - maxEle << endl;
    }
}