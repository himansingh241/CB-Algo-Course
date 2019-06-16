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

bool comp(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return s1.length() > s2.length();
    
    return s1 < s2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), comp);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;
    return 0;
}