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

int isFound(vi arr, int n, int m)
{
	if (n < 0)
		return -1;
	if (arr[n] == m)
		return n;
	return isFound(arr, n - 1, m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	int n;
	cin >> n;
	vi arr(n);
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll m;
	cin >> m;
	int found = isFound(arr, arr.size() - 1, m);
	cout << found << endl;
	return 0;
}