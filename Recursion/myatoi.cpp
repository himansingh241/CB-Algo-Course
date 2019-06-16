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

int convert(string str, int n)
{
    if (n == 0)
        return str[0] - '0';
    return  (10 * convert(str, n - 1) + str[n] - '0');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    string str;
    cin >> str;
    int n = str.length();
    cout << convert(str, n - 1) << '\n';
    return 0;
}