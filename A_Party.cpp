/*
           HAR HAR MAHADEV
<<<<<<< HEAD
              _SPIDER_ 
                                  */

#include <bits/stdc++.h>
using namespace std;

=======
              _SPIDER_2.0_
                                  */
 
#include <bits/stdc++.h>
using namespace std;
 
>>>>>>> 8th time
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
<<<<<<< HEAD

=======
 
>>>>>>> 8th time
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
<<<<<<< HEAD
#define nn cout << endl;
const ll N = 1e5 + 3;
vll adj[N];
vll vis(N, 0);
int arr[N];
int level;

void dfs(ll node)
{
    vis[node] = 1;
    /*for(int i=0;i<adj[node].size();i++)
    {
        int nxt=adj[node][i];
        if(!vis[nxt]) dfs(nxt);
    }  */
    if (arr[node] != -1)
    {
        level++;
        dfs(arr[node]);
    }
    return;
}
int main()
{
    fio;
    ll n;
    cin >> n;
    for1(i, n)
    {
        cin >> arr[i];
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        level = 0;
        dfs(i);
        //cout<<mx;
        mx = max(level, mx);
    }
    cout << mx + 1;
    nn;
    return 0;
}
=======
 
const ll N=1e5+3;
vll adj[N];
vll vis(N,0);
vll level;
ll c=0;
void dfs(long long node)
{
    vis[node]=1;
    c++;
    level.push_back(node);
    for(int i=0;i<adj[node].size();i++)
    {
        int nxt=adj[node][i];
        if(!vis[nxt])
        dfs(nxt);
    }
}

int main()
{
    fio;
    ll n,m;
    vll chk;
    cin>>n;
    for0(i,n)
    {
        int x;
        cin>>x;
        adj[i].push_back(x);
        chk.pb(x);
    }

for0(i,n)
{
    if(chk[i]==-1)
    dfs(i);
   // break;
    
}
//cout<<level.size();
cout<<c;
}

>>>>>>> 8th time
