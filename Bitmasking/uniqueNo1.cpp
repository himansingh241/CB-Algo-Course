#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll n; cin >> n;
    ll ans = 0, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans ^= temp;
    }
    cout << ans << '\n';
    return 0;
}