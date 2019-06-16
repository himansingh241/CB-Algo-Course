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

void selectionSort(ll *arr, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        ll smallIndex = i, small = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    for (ll i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}