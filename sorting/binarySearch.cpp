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

ll binarySearch(ll *arr, ll n, ll key)
{
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            r = mid - 1;
        else if (arr[mid] < key)
            l = mid + 1;
    }
    return -1;
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
    ll key;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;
    return 0;
}