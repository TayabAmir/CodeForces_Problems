#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n, x, mini = INT_MAX;
    bool zero = false;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 0)
            zero = true;
        mini = min(mini, abs(x));
    }
    if (zero)
        cout << 0 << endl;
    else
        cout << mini << endl;
}