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

int stringToInt(string str, int i, int x)
{
	if (i == 0)
		return (str[0] - '0') * x;
	return (str[i] - '0') * x + stringToInt(str, i - 1, x * 10);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	string str;
	cin >> str;
	cout << stringToInt(str, str.length() - 1, 1);
	return 0;
}