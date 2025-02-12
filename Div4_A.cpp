#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string w;
        cin >> w;
        cout << w.substr(0, w.length()-2) << "i" << endl;
    }
}