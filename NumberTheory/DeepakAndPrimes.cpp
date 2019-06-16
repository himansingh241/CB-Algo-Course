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

bool arr[100000005];
vi primeVector;
void sieve()
{
    for (ll i = 2; i < 100000005; i += 2)
    {
        arr[i] = true;
    }
    primeVector.PB(2);
    for (ll i = 3; i < 100000005; i += 2)
    {
        if (!arr[i])
        {
            primeVector.PB(i);
            for (ll j = i * i; j < 100000005; j += i)
            {
                arr[j] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll n;
    sieve();
    cin >> n;
    cout << primeVector[n - 1] << '\n';
    return 0;
}