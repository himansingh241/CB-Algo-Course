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

void replaceAllPi(string str, int i)
{
	if (i == str.length())
		return;
	if (i < str.length() - 1 && str[i] == 'p' && str[i + 1] == 'i')
	{
		cout << "3.14";
		replaceAllPi(str, i + 2);
	}
	else 
	{
		cout << str[i];
		replaceAllPi(str, i +  1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	ll test; cin >> test; 
	while(test--)
	{
		string str;
		cin >> str;
		replaceAllPi(str, 0);
		cout << '\n';
	}
	return 0;
}