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

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        swap(key, arr[j + 1]);
    }
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}