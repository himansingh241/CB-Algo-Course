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

void subsequences(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << '\n';
        return;
    }

    out[j] = in[i];
    subsequences(in, out, i + 1, j + 1);
    subsequences(in, out, i + 1, j);
}

int main()
{
    char in[100];
    cin >> in;
    char out[100];
    subsequences(in, out, 0, 0);
    return 0;
}