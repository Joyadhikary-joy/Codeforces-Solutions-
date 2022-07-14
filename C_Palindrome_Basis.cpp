/*
                               ॐ नमः शिवाय

                               _Karn_2.0_


*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define mpp make_pair
#define nn cout << '\n';
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define mod 1000000007
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (long long i = 0; i < n; i++)
#define for1(i, n) for (long long i = 1; i <= n; i++)
#define loop(i, a, b) for (long long i = a; i < b; i++)
#define for9(i, n) for (long long i = n - 1; i >= 0; i--)
const ll N = 1e9 + 5;

//                                            DEBUG SECTION

#define debug(a)                                             \
    cerr << "Line " << __LINE__ << " ## " << #a << " -->> "; \
    _print(a);                                               \
    cerr << endl;

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

bool sortbysec(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return (a.second > b.second);
}
// check the type of pair first

bool isPalin(int n)
{
    string s = to_string(n);

    string t = s;
    reverse(all(t));
    return s == t;
}

int main()
{
    vector<int> joy;
    for (int i = 1; i <= 40001; i++)
    {
        if (isPalin(i))
            joy.pb(i);
    }
    int s = joy.size();

    vector<vector<int>> dp(s + 1, vector<int>(40001, 0));
    for1(i, s)
    {
        for (int j = 0; j <= 4e4 + 1; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            if (joy[i - 1] <= j)
            {
                (dp[i][j] = (dp[i][j - joy[i - 1]]) % mod + (dp[i - 1][j]) % mod) % mod;
            }
            else
            {
                (dp[i][j] = dp[i - 1][j] % mod) %= mod;
            }
        }
    }
    test
    {
        int n;
        cin >> n;
        int x = dp[s][n] % mod;
        if (x < 0)
            x += mod;
        cout << x << endl;
    }
    return 0;
}
