// Problem Link- https://hack.codingblocks.com/contests/c/537/60/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    char c;
    cin >> c;
    if (isupper(c)) cout << "UPPERCASE\n";
    else if (islower(c)) cout << "lowercase\n";
    else cout << "Invalid\n";
    return 0;
}