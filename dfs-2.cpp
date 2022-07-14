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
vll vis(N, 0);
vll adj[N];
vll storedfs;

void dfs(ll node)
{
    vis[node] = 1;
    storedfs.push_back(node);
    for (int i = 0; i < adj[node].size(); i++)
    {
        ll nxt = adj[node][i];
        if (!vis[nxt])
            dfs(nxt);
    }
}

int main()
{
    fio;
    ll x, y;
    cin >> x >> y;
    for (int j = 0; j < y; j++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    for (int k = 0; k < storedfs.size(); k++)
    {
        cout << storedfs[k] << " ";
    }
    return 0;
}
/*

7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3

*/
