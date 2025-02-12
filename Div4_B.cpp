#include <iostream>
using namespace std;

int solve(string w)
{
    if (w.length() == 1) return 1;
    for (int i = w.length() - 1; i >= 1 ; i--)
        if (w[i] == w[i - 1])
            return 1;
    return w.length();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string w;
        cin >> w;

        cout << solve(w) << endl;
    }
}