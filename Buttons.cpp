#include <iostream>
using namespace std;

string solve(int a, int b, int c)
{
    return (c % 2 == 0) ? (a > b ? "First" : "Second") : (b > a ? "Second" : "First");
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << solve(a, b, c) << endl;
    }
}