#include<bits/stdc++.h>
using namespace std;
#define SQ(a) (a)*(a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long int 
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

bool isCBNo(ll n)
{
    int arr[10] = {2,3,5,7,11,13,17,19,23,29};
    if (n < 2) 
        return false;
    for (int i = 0; i < 9; i++)
        if (n == arr[i])
            return true;
    for (int i = 0; i < 9; i++)
        if (n % arr[i] == 0)
            return false;
    return true;       
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll count = 0;
    bool vis[n];
    for (int i = 0; i < n; i++)
        vis[i] = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            ll no = stoi(str.substr(i, j));
            if (isCBNo(no))
            {

                count++;
                
            }
        }   
    }
    cout << count << endl;
    return 0;
}