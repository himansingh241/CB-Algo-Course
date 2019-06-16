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

void allIndices(int *arr, int i, int n, int m)
{
	if (i == n)
		return;
	if (arr[i] == m)
		cout << i << " ";
	allIndices(arr, i + 1, n, m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int m;
	cin >> m;
	allIndices(arr, 0, n, m);
	return 0;
}