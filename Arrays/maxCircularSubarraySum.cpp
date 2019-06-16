#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int kadane(int *arr, int n)
{
    int maxSoFar = 0, maxEndingHere = 0;
    for (int i = 0; i < n; i++)
    {
        maxEndingHere += arr[i];
        if (maxEndingHere < 0)
            maxEndingHere = 0;
        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
    }
    return maxSoFar;
}

int maxCircularSum(int *arr, int n)
{
    int max_kadane = kadane(arr, n);
    int max_wrap = 0;
    for (int i = 0; i < n; i++)
    {
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }
    max_wrap += kadane(arr, n);
    return (max_wrap > max_kadane)? max_wrap : max_kadane;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test; cin >> test; 
    while(test--)
    {
        int n; cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << maxCircularSum(arr, n) << '\n';
    }
    return 0;
}