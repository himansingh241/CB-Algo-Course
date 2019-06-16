// Problem link - https://hack.codingblocks.com/contests/c/537/240/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    string s; cin >> s;
    int size = s.length();
    for (int i = 0; i < size - 1; i++)
    {
        cout << s[i] << (int) (s[i + 1] - s[i]);
    }
    cout << s[size - 1] << '\n';
    return 0;
}