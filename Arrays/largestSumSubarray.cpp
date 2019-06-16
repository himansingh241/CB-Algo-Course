#include<iostream>
using namespace std;
int main()
{
    int n;
    int currentSum = 0, max = 0;
    int left = -1, right = -1;
    cin >> n;
    int *arr = new int[n];
    int *cs = new int[n];
    cin >> arr[0];
    cs[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        cs[i] = cs[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = cs[j] - cs[i - 1];
            if (currentSum > max)
            {    
                max = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << "left = " << left << " right = " << right << '\n';
    cout << max << '\n';
    return 0;
}