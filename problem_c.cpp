#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> arr;
        int c = 1;
        for (int i = 0; i < (n + 1) / 2; i++, c += 2)
            if (c != 5)
                arr.push_back(c);

        arr.push_back(5);
        arr.push_back(4);

        c = 2;
        for (int i = (n + 1) / 2; i < n; i++, c += 2)
            if (c != 4)
                arr.push_back(c);

        int mid = n / 2;
        int sum = arr[mid] + ((n % 2 == 0) ? arr[mid - 1] : arr[mid + 1]);
        for (int r : arr)
            cout << r << " ";
    }
}
