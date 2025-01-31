#include <bits/stdc++.h>
using namespace std;

void rotateByOne(int start, int end, int arr[])
{
    int temp = arr[end];
    for (int i = end; i >= start; --i)
        arr[i] = arr[i - 1];
    arr[start] = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int output[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            output[i] = i + 1;
        }
        for (int i = 0; i < n;)
        {
            int curr = arr[i], count = 0, idx = i;
            while (i < n && curr == arr[i])
            {
                count++, i++;
            }
            if (count <= 1)
            {
                output[0] = -1;
                break;
            }
            else
            {
                rotateByOne(idx, i - 1, output);
            }
        }
        if (output[0] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int ele : output)
                cout << ele << " ";
            cout << endl;
        }
    }
}