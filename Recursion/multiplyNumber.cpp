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

int multiply(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    if (b == 1)
        return a;
    return (a + multiply(a, b - 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b);
    return 0;
}