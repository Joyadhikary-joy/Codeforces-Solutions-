/*
           HAR HAR MAHADEV
              _SPIDER_
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

const ll N = 1e5 + 2;
vll adj[N];
vll vis(N, 0);
vll postorder;
vll preorder;

void dfs(ll source)
{
    vis[source] = 1;
    preorder.push_back(source);
    for (int i = 0; i < adj[source].size(); i++)
    {
        int nxt = adj[source][i];
        if (vis[nxt] == 0)
        {
            dfs(nxt);
        }
    }
    postorder.push_back(source);
}

int main()
{
    fio;
    ll node, edge;
    cin >> node >> edge;
    for0(i, edge)
    {
        ll n, e;
        cin >> n >> e;
        adj[n].pb(e);
        adj[e].pb(n);
    }

    dfs(1);
    cout << endl;
    cout << "Those nodes has been visited :: " << endl;
    for (int j = 0; j < vis.size(); j++)
    {
        if (vis[j])
        {
            cout << j << " ";
        }
    }

    cout << endl;
    cout << "its preorder part ::  " << endl;

    for0(i, preorder.size())
    {
        cout << preorder[i] << " ";
    }
    cout << endl;
    cout << "its postorder part :: " << endl;

    for0(i, postorder.size())
    {
        cout << postorder[i] << " ";
    }
}
