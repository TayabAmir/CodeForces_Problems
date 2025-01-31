#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int moves = 0;
        bool directionX = true;

        while(x != 0 || y != 0){
            if(directionX)
                x = (x >= k) ?  x - k : 0;
            else 
                y = (y >= k) ?  y - k : 0;
            moves++, directionX = !directionX;
        }
        
        cout << moves << endl;
    }
}