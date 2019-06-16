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

void removeDuplicate(string str, int i)
{
	if (str.length() == i)
	{
		return;
	}
	if (i == 0)
		cout << str[i];
	else if (str[i - 1] != str[i] && i > 0)
		cout << str[i];
	if (str[i] == str[i + 1] && (i + 2) != str.length())
		removeDuplicate(str, i + 2);
	else 
		removeDuplicate(str, i + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	string str;
	cin >> str;
	removeDuplicate(str, 0);
	return 0;
}