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
void moveXend(string str, ll i, ll &count)
{
	if (str.length() == i)
		return;
	if (str[i] == 'x')
	{
		count++;
	}
	else 
	{
		cout << str[i];
	}
	i++;
	moveXend(str, i, count);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	string str;
	cin >> str;
	ll count = 0;
	moveXend(str, 0, count);
	for (ll i = 0; i < count; i++)	
		cout << "x";
	cout << '\n';
	return 0;
}