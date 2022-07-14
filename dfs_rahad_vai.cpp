#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> mp;
vector<int> G[200010];
vector<pair<int, int>> vv;
int visited[200010];
int flag;

void dfs(int u, int c)
{
    if (flag == 1)
        return;
    visited[u] = c;
    for (int i = 0; i < G[u].size(); i++)
    {
        int v = G[u][i];
        if (visited[v] == -1 && visited[u] == 1)
        {
            mp[make_pair(u, v)] = 1;
            dfs(v, 0);
            if (flag == 1)
                return;
        }
        else if (visited[v] == -1 && visited[u] == 0)
        {
            mp[make_pair(v, u)] = 1;
            dfs(v, 1);
            if (flag == 1)
                return;
        }
        else if ((visited[u] == visited[v]) && visited[u] != -1)
        {

            flag = 1;
            return;
        }
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        
    }
}