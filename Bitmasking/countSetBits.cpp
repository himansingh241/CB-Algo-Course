#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n&1);
        n = n >> 1;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll test; cin >> test; 
    while(test--)
    {
        int n;  cin >> n;
        cout << countSetBits(n) << '\n';
    }
    return 0;
}