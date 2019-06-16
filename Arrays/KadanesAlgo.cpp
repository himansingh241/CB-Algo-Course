#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        int maxTillHere = 0, maximum = 0;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            maxTillHere += arr[i];
            if (maxTillHere < 0)
                maxTillHere = 0;
            maximum = max(maxTillHere, maximum);
        }
        cout << maximum << '\n';
    }
    return 0;
}