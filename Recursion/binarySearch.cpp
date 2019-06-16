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

int binarySearch(int *arr, int l, int r, int key)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return binarySearch(arr, l, mid, key);
        else 
            return binarySearch(arr, l, r, key);
    }
    return -1;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);	cout.tie(NULL);
    int n, key;
    cout << "No of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements(in sorted order): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to be searched: ";
    cin >> key;
    cout << binarySearch(arr, 0, n, key);
    return 0;
}