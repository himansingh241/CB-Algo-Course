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

void bubbleSort(int *arr, int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    bubbleSort(arr, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}