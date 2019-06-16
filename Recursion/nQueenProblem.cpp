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

bool isSafe(int board[][10], int i, int j, int n)
{
    // Checking for col
    for (int row = 0; row < i; row++)
    {
        if (board[row][j])
            return false;
    }

    // Left diagonal
    int x = i;
    int y = j;

    while (x >= 0 && y >= 0)
    {
        if (board[x][y])
            return false;
        x--;
        y--;
    }

    // Right Diagonal
    x = i;
    y = j;
    while (x >= 0 && y < n)
    {
        if (board[x][y])
            return false;
        x--;
        y++;
    }
    return true;
}

bool solve(int board[][10], int i, int n)
{
    // Base case
    if (i == n)
    {
        // Successfully placed all queens
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j])
                    cout << "Q ";
                else 
                    cout << "_ ";
            }
            cout << '\n';
        }
        return true;
    }
    // Recursive case
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, i, j, n))
        {
            board[i][j] = 1;
            bool nextQ = solve(board, i + 1, n);
            if (nextQ)
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int board[10][10] = {0};
    solve(board, 0, n);
    return 0;
}