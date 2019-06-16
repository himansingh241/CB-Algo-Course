// Problem link- https://hack.codingblocks.com/contests/c/537/371/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool isPalindrome(int *arr,  int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - i - 1])
            continue;
        else return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n; cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (isPalindrome(arr, n)) cout << "true\n";
    else cout << "false\n";
    return 0;
}