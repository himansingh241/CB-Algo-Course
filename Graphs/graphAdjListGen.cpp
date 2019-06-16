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

template<typename T>
class Graph
{
    map<T, vector<T> > lst;
    public:
    void addEdge(T u, T v, bool isUndirected = true)
    {
        lst[u].push_back(v);
        if (isUndirected)
            lst[v].push_back(u);
    }
    void show()
    {
        for (auto it: lst)
        {
            cout << it.first << "-> ";
            for (auto it1: it.second)
                cout << it1 << ",";
            cout << '\n';
        }
    }

    void bfs(T start)
    {
        map<T, bool> isVis;
        queue<T> q;
        q.push(start);
        while (!q.empty())
        {
            T temp = q.front();
            q.pop();
            cout << temp << " ";
            for (auto it: lst[temp])
            {
                if (!isVis[it])
                {
                    q.push(it);
                    isVis[it] = true;
                }
            }
        }
    }

    void bfsSSSP(T start)
    {
        map<T, int> distance;
        for (auto it: lst)
            distance[it.first] = INT_MAX;
        queue<T> q;
        q.push(start);
        distance[start] = 0;
        while (!q.empty())
        {
            T temp = q.front();
            q.pop();
            for (auto it: lst[temp])
            {
                if (distance[it] == INT_MAX)
                {
                    q.push(it);
                    distance[it] = distance[temp] + 1;
                }
            }
        }
        for (auto it: lst)
        {
            T temp = it.first;
            cout << "Distance from " << start << " to " << temp << " is " << distance[temp] << '\n';
        }
    }

    void dfsUtil(T node, map<T, bool> &vis)
    {
        vis[node] = true;
        cout << node << " ";
        for (T it: lst[node])
            if (!vis[it])
                dfsUtil(it, vis);
    }
    void dfs(T start)
    {
        map<T, bool> vis;
        dfsUtil(start, vis);
    }

    void dfsHelper(T node, map<T, bool> &vis, list<T> &ordering)
    {
        vis[node] = true;
        for (T neigh: lst[node])
        {
            if (!vis[neigh])
            {
                dfsHelper(neigh, vis, ordering);
            }
        }
        ordering.push_front(node);
    }

    void dfsTopologicalSort()
    {
        map<T, bool> vis;
        list<T> ordering;
        for (auto i: lst)
        {
            T node = i.first;
            if (!vis[node])
            {
                dfsHelper(node, vis, ordering);
            }
        }
        for (T element: ordering)
        {
            cout << element << " ";
        }
    }
    // Topological sort using bfs-Khan's Algorithm
    void topologicalSort()
    {
        queue<T> q;
        map<T, bool> vis;
        map<T, int> indegree;
        for (auto i: lst)
        {
            T node = i.first;
            vis[node] = false;
            indegree[node] = 0;
        }

        for (auto i: lst)
        {
            T u = i.first;
            for (T v: lst[u])
                indegree[v]++;
        }
        for (auto i : lst)
        {
            T node = i.first;
            if (indegree[node] == 0)
                q.push(node);
        }
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            cout << node << " ";
            for (T neigh: lst[node])
            {
                indegree[neigh]--;
                if (indegree[neigh] == 0)
                    q.push(neigh);
            }
        }
    }

    // Check cycle using bfs
    bool isCyclicBFS(T src)
    {
        map<T, bool> vis;
        map<T, int> parent;
        queue<T> q;
        q.push(src);
        vis[src] = true;
        parent[src] = src;
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            for (T neigh: lst[node])
            {
                if (vis[neigh] && parent[node] != neigh)
                    return true;
                else if (!vis[neigh])
                {
                    vis[neigh] = true;
                    parent[neigh] = node;
                    q.push(neigh);
                }
            }
        } 
        return false;
    }

    bool isCyclicHelper(T node, map<T, bool> &vis, map<T, bool> &inStack)
    {
        vis[node] = true;
        inStack[node] = true;
        
        for (auto neigh: lst[node])
        {
            if (!vis[neigh] && isCyclicHelper(neigh, vis, inStack) || inStack[neigh])
                return true;
        }
        inStack[node] = false;
        return false;
    }
    bool isCyclicDFS()
    {
        map<T, bool> vis;
        map<T, bool> inStack;

        for (auto i: lst)
        {
            T node = i.first;
            if (!vis[node])
            {
                bool cycle = isCyclicHelper(node, vis, inStack);
                if (cycle)
                    return true;
            }
        }
        return false;
    }    
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.dfsTopologicalSort();
    // g.show();
    return 0;
}