#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;
        int sum = 0;
        while(--n){
            cin >> x;
            sum += x;
        }
        cout << -sum << endl;
    }
}