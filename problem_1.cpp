#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int seats[n];
        for (int i = 0; i < n; i++)
            cin >> seats[i];
        
        bool valid = true;
        int minSeat = seats[0];
        int maxSeat = seats[0];
        
        for (int i = 1; i < n; i++) {
            minSeat = min(minSeat, seats[i]);
            maxSeat = max(maxSeat, seats[i]);
            if (maxSeat - minSeat != i) {
                valid = false;
                break;
            }
        }
        
        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
