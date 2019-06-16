// Problem link- https://hack.codingblocks.com/contests/c/537/241
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

char getMax(string str)
{
    vector<int> count(256, 0);
    int size = str.length();
    int max = 0;
    char result;
    for (int i = 0; i < size; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            result = str[i];
            max = count[str[i]];
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    string str; cin >> str;
    cout << getMax(str) << '\n';
    return 0;
}