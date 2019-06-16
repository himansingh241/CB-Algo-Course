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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll test; cin >> test; 
    while(test--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        string output;
        for (int i = 0; i < str1.length(); i++)
        {
            int a = (str1[i] - '0');
            int b = (str2[i] - '0');
            char res = (a ^ b) + '0';
            output.push_back(res);
        }
        cout << output << endl;
    }
    return 0;
}