/*
    Problem - Given a brick wall of 4XN and tiles of size 4X1,
    you have to dinf out total no of ways to arrange tiles on the wall.
*/

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

int tiling(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2 || n == 3)
        return 1;
    if (n == 4)
        return 4;
    return (tiling(n - 1) + tiling(n - 4));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n;
    cin >> n;
    cout << "Ways: " << tiling(n) << '\n';
    return 0;
}