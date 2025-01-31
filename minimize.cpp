#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a , b;
        cin >> a >> b;
        int ans = INT_MAX;
        for(int c = a; c <= b; c++){
            ans = min(ans, (c - a) + (b - c));
        }
        cout << ans << endl;
    }
}