#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

// Display
void display(int **arr, int n)
{
    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

// Rotate 2D array 90 degrees anti-clockwise
void image(int **arr, int n)
{
    // Transpose of matrix
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);
    // Reverse 1st and last column
    for (int i = 0; i < n; i++)
    {
        int bottom = n - 1, top = 0;
        while (top != n && top < bottom)
        {
            swap(arr[top][i], arr[bottom][i]);
            top++;
            bottom--;
        }
    }
    display(arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    image(arr, n);
    return 0;
}