#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int n; cin >> n; 
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int *l = new int[n];
    int *r = new int[n];
    l[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= l[i - 1]) l[i] = arr[i];
        else l[i] = l[i - 1];
    }
    r[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= r[i + 1]) r[i] = arr[i];
        else r[i] = r[i + 1];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += min(r[i], l[i]) - arr[i];
    cout << sum << '\n';
    return 0;
}