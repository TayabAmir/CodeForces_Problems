#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int res = 0;
        vector<string> v;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s); 
        }
        for(int i = 0; i < n; i++){
            if (v[i].length() > m) {
                break;
            }
            m -= v[i].length(); 
            res++;       
        }
        cout << res << endl;
    }
}