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

    test
    {
        string st;
        int a = 0, n, b = 0, c = 0, count = 0, x = 0;
        cin >> st;
        n = st.size();
        /* for0(i, n)
        {
            if (st[i] == '1')
            {
                a = i;
                break;
            }
        }
        for (int j = n - 1; j > a; j--)
        {
            if (st[j] == '1')
            {
                b = j;
                break;
            }
        }
        c = b - a; */
        ll first = n + 1, second = -1;
        for (ll i = 0; i < n; i++)
        {
            if (st[i] == '1')
            {
                second = max(second, i);
                first = min(first, i);
            }
        }

        for (int p = first; p < second; p++)
        {
            if (st[p] == '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}