#include<bits/stdc++.h>
using namespace std;
#define SQ(a) (a)*(a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long int 
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

ll maxs = 1e6 + 1;

void countSort(ll *arr, ll n)
{
    ll count[maxs] = {0};
    for (ll i = 0; i < n; i++)
        count[arr[i]]++;
    ll *brr = new ll[n];
    for (ll i = 1; i < maxs; i++)
        count[i] += count[i - 1];
    for (ll i = n - 1; i >= 0; i--)
    {
        brr[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (ll i = 0; i < n; i++)
        arr[i] = brr[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    countSort(arr, n);
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
    return 0;
}