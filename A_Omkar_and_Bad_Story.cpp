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

bool squre(ll x)
{
    ll y = round(sqrt(x));
    if (y * y == x)
        return 1;
    else
        return 0;
}

int main()
{
    fio;
<<<<<<< HEAD

    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        vll v;
        ll k;
        for0(i, n)
        {
            cin >> k;
            if (k < 0)
            {
                sum = 1;
            }
            v.pb(k);
        }
        if (sum)
           NO
        else
        {
            YES
            cout << "101" << endl;
            loop(i, 0, 101)
            {
                cout << i << " ";
            }
            cout<<endl;
=======
    test
    {

        ll n, count = 0;
        cin >> n;

        vll v(n);
        set<ll> s;
        for0(i, n)
        {
            cin >> v[i];
            if (v[i] < 0)
                count = 1;
            s.insert(v[i]);
        }
        ll ans = 1;
        for (int i = 0; i < v.size() && ans; i++)
        {
            for (int j = 0; j < v.size() && ans; j++)
            {
                if (i == j)
                    continue;

                ll x = abs(v[i] - v[j]);
                if (s.count(x) == 0)
                {
                    v.pb(x);
                    s.insert(x);
                    if (s.size() > 300)
                        ans = 0;
                }
            }
        }
        if (count)
        {
            NO;
        }
        else
        {
            yes;
            cout << v.size() << endl;
            for (int k = 0; k < v.size(); k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
>>>>>>> 8th time
        }
    }

    return 0;
}