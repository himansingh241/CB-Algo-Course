// Problem link- https://hack.codingblocks.com/contests/c/537/107/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    string str;
    cin >> str;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        cout << str[i];
        int j = i;
        int count = 1;
        while (str[j + 1] == str[i])
        {
            count++;
            j++;
        }
        i = j;
        cout << count;
    }
    cout << '\n';
    return 0;
}