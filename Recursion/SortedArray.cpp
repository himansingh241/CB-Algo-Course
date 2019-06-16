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

bool isSorted(vi arr, int n)
{
	if (n == 1 || n == 0)
		return true;
	if (arr[n - 1] < arr[n - 2])
		return false;
	return isSorted(arr, n - 1);
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
	if (isSorted(arr, arr.size()))
		cout << "true";
	else 
		cout << "false";
	return 0;
}