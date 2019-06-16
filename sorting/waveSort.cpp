#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *arr= new int[size];
    cout << "Enter array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i+=2)
    {
        if (i > 0 && arr[i - 1] > arr[i])
            swap(arr[i], arr[i - 1]);
        if (i < size - 1 && arr[i + 1] > arr[i])
            swap(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << '\n';
    return 0;
}