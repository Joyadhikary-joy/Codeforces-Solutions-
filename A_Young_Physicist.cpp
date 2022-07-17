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
#define nn cout << endl;
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
//const ll N = 1e5 + 3;

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
    int n;
    ll sum = 0, x[7], y[8], z[8];
    int sx = 0, sy = 0, sz = 0, mx = 0;
    cin >> n;
    for1(i, n)
    {
        for1(i, 3)
        {
            if (i == 1)
            {
                cin >> x[i];
                sx += x[i];
            }
            else if (i == 2)
            {
                cin >> y[i];
                sy += y[i];
            }
            else
            {
                cin >> z[i];
                sz += z[i];
            }
        }
    }
    mx = (sz + sx + sy);
    if (mx == 0 && sz == 0 && sx == 0 && sy == 0)
    {
        YES;
    }
    else
        NO;
    // cout<<sum;
}
