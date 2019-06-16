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

ll mod = 1e9 + 7;

ll tillingProb(ll n, ll m)
{
	if (n == m)
		return 2;
	if (n < m || n < 1)
		return 1;
	return (tillingProb(n - 1, m) * mod + tillingProb(n - m, m) * mod) * mod;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	ll test; cin >> test; 
	while(test--)
	{
		ll n, m;
		cin >> n >> m;
		cout << tillingProb(n, m) << '\n';
	}
	return 0;
}