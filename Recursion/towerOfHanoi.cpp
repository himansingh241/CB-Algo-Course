/*
    Rules-
    1. You cannot place bigger disk over a smaller disk.
    2. You can move one disk at a time.

    Solution-
    Step 1. Move (n - 1) disk from source to aux stand.
    Step 2. Move nth disk from source to destination.
    Step 3. Move n - 1 disk from aux to destination.
*/

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

void towerOfHanoi(int n, char src, char dest, char aux)
{
    if (n == 0)
        return;
    // Step 1
    towerOfHanoi(n - 1, src, aux, dest);
    cout << "Move " << n << " disk from " << src << " to " << dest << '\n';
    towerOfHanoi(n - 1, aux, dest, src);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}