#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a <= 100)
        {
            cout << "NO" << endl;
        }
        else
        {
            string s = to_string(a);
            if(s[0] != '1' || s[1] != '0'){
                cout << "NO" << endl;
                continue;
            }
            if(s[2] == '0' || s.substr(2) == "0" || s.substr(2) == "1"){
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
        }
    }
    return 0;
}