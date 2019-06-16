// Problem Link - https://hack.codingblocks.com/contests/c/537/63
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool isPrime(ll a)
{
    if (a < 2) return false;
    for (ll i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

ll primeVisits(ll a, ll b, bool *arr)
{
    ll count = 0;
    for (ll i = a; i <= b; i++)
        if (arr[i]) count++;
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test; cin >> test; 
    bool *arr = new bool[1000001];
    ll size = 1000001;
    arr[0] = false; arr[1] = false;
    for (int i = 2; i < size; i++)
        arr[i] = isPrime(i);
    while(test--)
    {
        ll a, b; cin >> a >> b;
        cout << primeVisits(a, b, arr) << '\n';
    }
    return 0;
}