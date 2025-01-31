#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans(n);
        char input;
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= 4; j++){
                cin >> input;
                if(input == '#')
                    ans[i] = j;
            }
        }
        reverse(ans.begin(), ans.end());
        
        for(int ele : ans)
            cout << ele << " ";
        cout << endl;
    }
}