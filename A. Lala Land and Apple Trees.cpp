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
 
int main()
{
    fio;
    vector<pair<int, int>> vp;
    int n, a, j, b, d, x, sum = 0, neg = 0, posi = 0;
    cin >> n;
    for0(i, n)
    {
        cin >> x >> a;
        vp.pb(mp(x, a));
    }
    Sort(vp);
    for0(i, n)
    {
        if (vp[i].ff < 0)
        {
            neg++;
        }
        else
            posi++;
    }
    if (neg == posi)
    {
        for0(i, n)
        {
            sum += vp[i].ss;
        }
    }
    else if (neg < posi)
    {
        int i = 0;
        for (; i < n; i++)
        {
            if (vp[i].ff < 0)
            {
                sum = sum + vp[i].ss;
            }
            else
                break;
        }
        int p = neg + 1;
        for (; i < n && p; i++, p--)
        {
            sum = sum + vp[i].ss;
        }
    }
    else if (neg > posi)
    {
        int i = n - 1;
        for (; i >= 0; i--)
        {
            if (vp[i].ff > 0)
            {
                sum = sum + vp[i].ss;
            }
            else
                break;
        }
        neg = posi + 1;
        for (; i >= 0 && neg; i--, neg--)
        {
            sum = sum + vp[i].ss;
        }
    }
    cout << sum;
    return 0;
}
 