#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (abs(b - a) == 1 || abs(b - a - 1) % 2 == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}