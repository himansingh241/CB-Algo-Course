// Problem Link- https://hack.codingblocks.com/contests/c/537/901/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    string str; cin >> str;
    int size = str.length();
    cout << str[0];
    for (int i = 1; i < size; i++)
    {
        if (isupper(str[i])) cout << '\n';
        cout << str[i];
    }
    cout << '\n';
    return 0;
}