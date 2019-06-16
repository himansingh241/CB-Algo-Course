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

void merge(ll *arr, ll l, ll mid, ll r)
{
	ll l1 = mid - l + 1;
	ll l2 = r - mid;
	ll *a = new ll[l1];
	ll *b = new ll[l2];
	for (int i = 0; i < l1; i++)
		a[i] = arr[i + l];
	for (int i = 0; i < l2; i++)
		b[i] = arr[mid + i + 1];
	int i = 0, j = 0, k = l;
	while (i < l1 && j < l2)
	{
		if (a[i] <= b[j])
		{
			arr[k] = a[i];
			k++;
			i++;
		}
		else 
		{
			arr[k] = b[j];
			k++;
			j++;
		}
	}
	while (i < l1)
	{
		arr[k] = a[i];
		i++;
		k++;
	}
	while (j < l2)
	{
		arr[k] = b[j];
		j++;
		k++;
	}
}

void mergeSort(ll *arr, int l, int r)
{
	if (l < r)
	{
		ll mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r);
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
	mergeSort(arr, 0, n - 1);
	for (ll i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << '\n';
	return 0;
}