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

ll myGCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return myGCD(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    cout << (a * b) / myGCD(a, b) << '\n';
    return 0;
}