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

class Graph
{
    int n;
    vector<int> *lst;
    public:
    Graph(int v)
    {
        n = v;
        lst = new vector<int>[v];
    }
    // By default the graph is undirected
    void addEdge(int u, int v, bool isUndirected = true)
    {
        lst[u].push_back(v);
        if (isUndirected)
            lst[v].push_back(u);
    }

    void show()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "-> ";
            for (int it: lst[i])
                cout << it << ",";
            cout << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 3);
    g.addEdge(0, 2);
    g.addEdge(2, 4);
    g.show();
    return 0;
}