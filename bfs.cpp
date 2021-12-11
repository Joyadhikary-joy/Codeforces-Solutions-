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


vector<int> len, parents;
vector<vector<int>> adj;
vector<bool> used;

void bfs(int x)
{
    int s, q;
    queue<int> qu;

    qu.push(x);
    used[x] = true;
    parents[x] = -1; // source node

    while (!qu.empty())
    {
        int frt = qu.front();
        qu.pop();
        cout << frt << endl;
        /*for (int j : adj[frt]) // travers 0 --> 1,2,3,4,  connected nodes
        {
            if (!used[j])
            { 
                qu.push(j);
                used[j] = true;
                len[j] = len[frt] + 1;
                parents[j] = frt;
            }*/
              // Enqueue all adjacent of f and mark them visited 
        for (auto i = adj[frt].begin(); i != adj[frt].end(); i++) {
            if (!used[*i]) {
                qu.push(*i);
                used[*i] = true;
            }
        }
        }
    }


int main()
{
    int n,e;
    int a, b;
    
    cin >> n >> e;
    used.assign(n, false);
    adj.assign(n, vector<int>());
    

    

    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        adj[a].pb(b); // {(0,1),(0,2),(0,3)}
    }

    for (int i = 0; i < n; i++)
    {
        if (!used[i])
            bfs(i);
    }

    return 0;
}