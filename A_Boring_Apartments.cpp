/*
<<<<<<< HEAD
                               ॐ नमः शिवाय

                                 _Karno_


*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
=======
                           HAR HAR MAHADEV
                            _SPIDER_2.0_
                                                            */

#include <bits/stdc++.h>
>>>>>>> 8th time
using namespace std;

typedef long long ll;
typedef long double ld;
<<<<<<< HEAD
typedef unsigned long long ull;
=======
>>>>>>> 8th time
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

<<<<<<< HEAD
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
=======
>>>>>>> 8th time
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
<<<<<<< HEAD
#define pp pop_back
#define mp make_pair
#define nn cout << '\n';
=======
#define mp make_pair
#define nn cout << endl;
>>>>>>> 8th time
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
<<<<<<< HEAD
=======
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
>>>>>>> 8th time
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
<<<<<<< HEAD
const ll N = 1e5 + 3;

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
=======
//const ll N=1e5+3;
>>>>>>> 8th time

int main()
{
    fio;
<<<<<<< HEAD
    test{
    ll ans = 0, n, sum = 0, max = 0;
    string s;
    cin>>s;
    n=s.size();
    max=s[0]-'0';
    sum=10*(max-1);
   sum+=(n*(n+1)/2);
   cout<<sum;
    nn;
    }
}
=======
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans, x;
        x = s[0] - '0';
        int n = s.size();
        ans = (x - 1) * 10;
        ans += (n * (n + 1)) / 2;
        cout << ans << endl;
    }
    
    return 0;
}
>>>>>>> 8th time
