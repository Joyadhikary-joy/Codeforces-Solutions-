/*
<<<<<<< HEAD
                               ॐ नमः शिवाय  
 
                                 _Karno_
 
 
=======
                               ॐ नमः शिवाय

                               _Karn_2.0_


>>>>>>> 8th time
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
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
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define mp make_pair
#define nn cout << '\n';
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
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;
<<<<<<< HEAD
 
//                                            DEBUG SECTION
 
=======

//                                            DEBUG SECTION

>>>>>>> 8th time
#define debug(a)                                             \
    cerr << "Line " << __LINE__ << " ## " << #a << " -->> "; \
    _print(a);                                               \
    cerr << endl;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
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
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
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
<<<<<<< HEAD
 
int main()
{
    fio;
    
=======

int main()
{
    fio;
    ll n, fx = 0, sx = 0,sum1=0,sum2=0,sum3=0;
    cin >> n;
    vll v1(n), v2(n - 1), v3(n - 2);
    for0(i, n)
    {
        cin >> v1[i];
        sum1+=v1[i];
    }
    for0(i, n - 1)
    {
        cin >> v2[i];
        sum2+=v2[i];
    }
    for0(i, n - 2)
    {
        cin >> v3[i];
        sum3+=v3[i];
    }
    /* sort(all(v1));
    sort(all(v2));
    sort(all(v3));
    for0(i, n - 1)
    {
        if (v1[i] != v2[i])
        {
            fx = v1[i];
            break;
        }
    }
    if (fx == 0)
    {
        fx = v1[n - 1];
    }
    for0(i, n - 2)
    {
        if (v2[i] != v3[i])
        {
            sx = v2[i];
            break;
        }
    }
    if (sx == 0)
    {
        sx = v2[n - 2];
    }

    */
   fx=abs(sum1-sum2);
   sx=abs(sum2-sum3);
    cout << fx << endl;
    cout << sx << endl;
>>>>>>> 8th time
    return 0;
}