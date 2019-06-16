// Problem Link- https://hack.codingblocks.com/contests/c/537/193
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    char c;
    cin >> c;
    if (isupper(c)) cout << "U\n";
    else if (islower(c)) cout << "L\n";
    else cout << "I\n";
    return 0;
}