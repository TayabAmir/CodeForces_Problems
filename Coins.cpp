#include <iostream>
using namespace std;

string solve(long long n, long long k)
{
    if(n % 2 == 0) return "Yes";
    if(k % 2 == 0) return "No";
    return "Yes";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}