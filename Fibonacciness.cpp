#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a3, a4, a5;
        cin >> a1;
        cin >> a2;
        cin >> a4;
        cin >> a5;

        int maxCount = -1;
        for (int i = -200; i <= 200; i++)
        {
            int count = 0;
            a3 = i;
            if (a1 + a2 == a3)
                count++;
            if (a2 + a3 == a4)
                count++;
            if (a3 + a4 == a5)
                count++;
            maxCount = max(count, maxCount);
        }

        cout << maxCount << endl;
    }
}