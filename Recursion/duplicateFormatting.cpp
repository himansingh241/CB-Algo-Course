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

void duplicateFormatting(string str, int i)
{
	if (i == str.length())
		return;
	cout << str[i];
	if (str[i] == str[i + 1])
		cout << "*";
	duplicateFormatting(str, i + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	string str;
	cin >> str;
	duplicateFormatting(str, 0);
	return 0;
}