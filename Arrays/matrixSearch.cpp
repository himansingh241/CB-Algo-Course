// Problem link- https://hack.codingblocks.com/contests/c/537/705/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n, m; cin >> n >> m;
    int **arr = new int*[n];
    for (int i = 0 ; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int ele; cin >> ele;
    int i = 0, j = m - 1;
    bool flag = false;
    while (i >= 0 && j >= 0 && i < n && j < m && !flag)
    {
        if (arr[i][j] == ele)   flag = true;
        else if (arr[i][j] > ele) j--;
        else if (arr[i][j] < ele) i++;
    }
    if (flag) cout << "1\n";
    else cout << "0\n";
    return 0;
}