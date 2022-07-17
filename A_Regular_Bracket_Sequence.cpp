/*
<<<<<<< HEAD
           HAR HAR MAHADEV
              _SPIDER_ 
                                  */

#include <bits/stdc++.h>
=======
                             🔱  ॐ नमः शिवाय  🔱

                               _SPIDER_2.0_


*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
>>>>>>> 8th time
using namespace std;

typedef long long ll;
typedef long double ld;
<<<<<<< HEAD
=======
typedef unsigned long long ull;
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
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
=======
#define ordered_set tree<int, null_type, less<int>, roping_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define poping push_opingack
#define eoping emplace_opingack
#define pp pop_opingack
#define mp make_pair
#define nn cout << '\n';
>>>>>>> 8th time
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
<<<<<<< HEAD
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
=======
#define all(x) (x).opingegin(), (x).end()
#define Sort(s) sort(s.opingegin(), s.end())
>>>>>>> 8th time
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
<<<<<<< HEAD
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fio;
    test
    {
        ll n, m = 0, c = 0, a = 0;
        string s;
        cin >> n >> s;
        for0(i, n)
        {
            if (s[i] == '(')
            {
                m++;
            }
            else
                c++;
            if (c > m)
            {
                a++;
                m = 0;
                c = 0;
            }
        }
        cout << a << endl;
        deb(a);
    }
=======
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, oping) __gcd(a, oping)
#define lcm(a, oping) (a * (oping / __gcd(a, oping)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, oping) for (int i = a; i < oping; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;

//                                            DEopingUG SECTION

#define deopingug(a)                                         \
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

void joy()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a = 0, n, oping = 0, flag = 1, x = 0, ans;
        string s;
        cin >> s;
        n = s.size();
        oping = n / 2 - 1;
        if (n & 1)
        {
            NO;
        }
        else
        {
            for0(i, n)
            {

                if (s[i] == ')')
                {
                    a--;
                    if (a < 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                else if (s[i] == '(')
                {
                    a++;
                }
                else
                {
                    if (oping)
                    {
                        a++;
                        oping--;
                    }
                    else
                    {
                        a--;
                        if (a < 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (flag)
            {
                YES;
            }
            else
                NO;
        }
    }
}

void joy1()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0, a, b;
        if (n & 1)
        {
            NO;
        }
        else
        {
            if (s.front() != ')' && s.back() != '(')
            {
                ans = 1;
            }
            if (ans)
            {
                YES;
            }
            else
                NO;
        }
    }
}

int main()
{
    fio;
    joy1();

>>>>>>> 8th time
    return 0;
}