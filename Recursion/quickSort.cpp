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

ll partition(ll *arr, ll l, ll r)
{
	ll x = r;
	ll i = l - 1;
	for (ll j = l; j < r; j++)
	{
		if (arr[j] <= arr[x])
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[i], arr[x]);
	return i;
}

ll randomizePartition(ll *arr, ll l, ll r)
{
	srand(time(NULL));
	ll n = rand() % (r - l) + l;
	swap(arr[r], arr[n]);
	return partition(arr, l, r);
}
void quickSort(ll *arr, ll l, ll r)
{
	if (l < r)
	{
		ll pivot = randomizePartition(arr, l, r);
		quickSort(arr, l, pivot - 1);
		quickSort(arr, pivot + 1, r);
	}
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
	quickSort(arr, 0, n - 1);
	for (ll i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << '\n';
	return 0;
}