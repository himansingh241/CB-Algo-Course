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

void permute(char *in, int i)
{
    // Base Case
    if (in[i] == '\0')
    {
        cout << in << '\n';
        return;
    }
    // Recursive case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permute(in, i + 1);
        // Restoring the original array (Backtracking)
        swap(in[i], in[j]);
    }
}

int main()
{
    char in[100];
    cin >> in;
    permute(in, 0);
    return 0;
}