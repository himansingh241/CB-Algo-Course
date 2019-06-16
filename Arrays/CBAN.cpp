#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0;
    if (str[i] == '9')
        i++;
    while (str[i] != '\0')
    {
        int digit = str[i] - '0';
        if ((9 - digit) < digit)
            str[i] = (9 - digit) + '0';
        i++;
    }
    cout << str << '\n';
    return 0;
}