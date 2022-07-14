/*
           HAR HAR MAHADEV
<<<<<<< HEAD
              _SPIDER_ 
=======
              _SPIDER_2.0_
>>>>>>> 8th time
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
<<<<<<< HEAD
const ll N = 1e5 + 2;

int repeat[N];
int vis[N];

bool dfs(int node)
{
    for1(j, m)
    {
        if (!vis[j] && abs(b[node] - g[j]) <= 1)
        {
            vis[j] = 1;
            if (!repeat[j] || dfs(repeat[j]))
            {
                repeat[j] = node;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    fio;
    int n, m, count = 0;
    vll b;
    vll g;

    cin >> n;
    for0(i, n)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    cin >> m;
    for0(i, m)
    {
        int y;
        cin >> y;
        g.push_back(y);
    }

    Sort(g);
    sort(all(b));

    for0(i, n)
    {
        for0(j, m)
        {
            if (abs(b[i] - g[j]) <= 1 && !vis[g[i]])
            {
                count++;
                vis[g[i]]=1;
                //break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
=======

bool squre(ll x)
{
    ll y = round(sqrt(x));
    if (y * y == x)
        return 1;
    else
        return 0;
}

const int maxn = 150;
int n, m, A[maxn], B[maxn];
int seat[maxn], used[maxn];

bool dfs(int i)
{
    for (int j = 1; j <= m; j++)
        if (!used[j] && abs(A[i] - B[j]) <= 1)
        {
            used[j] = 1;
            if (!seat[j] || dfs(seat[j]))
            {
                seat[j] = i;
                return true;
            }
        }
    return false;
}
int main()
{
    fio;
    cin >> n;
    for1(i, n)
    {
        cin >> A[i];
    }
    cin >> m;
    for1(i, m)
    {
        cin >> B[i];
    }
    int sum = 0;
    for1(i, n)
    {
        memset(used, 0, sizeof(used));
        if (dfs(i))
            sum++;
    }
    cout << sum << endl;

    return 0;
}
>>>>>>> 8th time
