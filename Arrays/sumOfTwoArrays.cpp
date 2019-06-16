// Problem link - https://hack.codingblocks.com/contests/c/537/217/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int n; cin >> n;
    stack<int> s1;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s1.push(temp);
    }
    int m; cin >> m;
    stack<int> s2;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        s2.push(temp);
    }
    int carry = 0;
    stack<int> result;
    while (!s1.empty() && !s2.empty())
    {
        int a = s1.top();
        s1.pop();
        int b = s2.top();
        s2.pop();
        int res = a + b + carry;
        carry = res / 10;
        result.push(res % 10);
    }
    while (!s1.empty())
    {
        int a = s1.top() + carry;
        s1.pop();
        carry = a / 10;
        result.push(a % 10);
    }
    while (!s2.empty())
    {
        int a = s2.top() + carry;
        s2.pop();
        carry = a / 10;
        result.push(a % 10);
    }
    if (carry) result.push(carry);
    while (!result.empty())
    {
        cout << result.top() << ", ";
        result.pop();
    }
    cout << "END\n";
    return 0;
}