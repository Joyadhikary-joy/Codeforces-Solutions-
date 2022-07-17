<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int>mp;
vector<int>G[200010];
vector<pair<int,int> >vv;
int visited[200010];
int flag;
 
int zero(int n)
{
    vv.clear();
    mp.clear();
    for(int i=0; i<=n+8; i++)
    {
        G[i].clear();
        visited[i] = -1;
    }
}
 
void dfs(int u,int c)
{
    if(flag==1)
        return;
    visited[u] = c;
    for(int i=0; i<G[u].size(); i++)
    {
        int v = G[u][i];
        if(visited[v]==-1&&visited[u]==1)
        {
            mp[make_pair(u,v)] = 1;
            dfs(v,0);
            if(flag==1)return;
        }
        else if(visited[v]==-1&&visited[u]==0)
        {
            mp[make_pair(v,u)] = 1;
            dfs(v,1);
              if(flag==1)return;
        }
        else if((visited[u]==visited[v])&&visited[u]!=-1)
        {
           
            flag = 1;
            return;
        }
    }
} 
=======
/*
           HAR HAR MAHADEV
              _SPIDER_2.0_
                                  */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)

const ll N = 1e5 + 2;
vector<ll> visited(N, 0);
vector<ll> adj[N];
vector<ll> storedfs;

void dfs(ll source)
{
    visited[source] = 1;
    storedfs.push_back(source);
    for (int i = 0; i < adj[source].size(); i++)
    {
        ll next = adj[source][i];
        if (visited[next] == 0)
        {
            dfs(next);
        }
    }
}

int main()
{
    fio;
    ll node, edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        ll n,e;
        cin >> n >> e;
        adj[n].push_back(e);
        adj[e].push_back(n);
    }

    dfs(1);
    
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 1)
            cout << i << " ";
    }
    cout << endl;
    for (int j = 0; j < storedfs.size(); j++)
    {
        cout << storedfs[j] << " ";
    }

    return 0;
}
>>>>>>> 8th time
