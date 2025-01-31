#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , m;
        cin >> n >> m;
        int arr[n][m];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> arr[i][j];
            }
        }
        int count = 0;
        int sum = 0, smallest = 101;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(arr[i][j] < 0){
                    count++;
                }
                smallest = min(smallest,abs(arr[i][j]));
                sum += abs(arr[i][j]);
            }
        }
        if(count % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - (2 * smallest) << endl;
    }
}