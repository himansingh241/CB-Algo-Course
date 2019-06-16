// Problem Link- https://hack.codingblocks.com/contests/c/537/110/
#include<bits/stdc++.h>
#define ll long long int 
#define MAX_SIZE 500
using namespace std;

int multiply(int x, int *result, int resultSize)
{
    int carry = 0;
    for (int i = 0; i < resultSize; i++)
    {
        int product = result[i] * x + carry;
        carry = product / 10;
        result[i] = product % 10;
    }
    while (carry)
    {
        result[resultSize] = carry % 10;
        carry /= 10;
        resultSize++;
    }
    return resultSize;
}

void factorial(int n)
{
    int *result = new int[MAX_SIZE];
    result[0] = 1;
    int resultSize = 1;
    for (int i = 2; i <= n; i++)
        resultSize = multiply(i, result, resultSize);
    for (int i = resultSize - 1; i >= 0; i--)
        cout << result[i];
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll test; cin >> test;
    while (test--)
    {
        int n; cin >> n; 
        factorial(n);
    }
    return 0;
}