// Problem link- https://hack.codingblocks.com/contests/c/537/55/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n, m; cin >> n >> m;
    int k, s; cin >> k >> s;
    char **arr = new char*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new char[m];
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int maxs = 0, cm = s;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        // if (maxs < cm)
        //     maxs = cm;
        // cm = 0;
        for (int j = 0; j < m; j++)
        {
            if (s > 0)
            {
                if (arr[i][j] == '#') 
                {
                    maxs = max(maxs, cm);
                    cm = 0;
                    break;
                }
                if (arr[i][j] == '*')
                {
                    s += 5;
                    cm += 5;
                }
                else if (arr[i][j] == '.')
                {    
                    cm -= 2;
                    s -= 2;
                }
                if (j < m - 1)
                {
                    s--;
                    cm--;
                }
            }
        }
        maxs = max(maxs, cm);
        if (s < 0)
        {
            flag = true;
            break;
        }
    }
    if (flag || s < k)  cout << "No\n";
    else cout << "Yes\n" << s << '\n';
    return 0;
}