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
//const ll N=1e5+3;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s, s1, s2;
        cin >> s;
        s1 = s;
        s2 = s;
        if (s[0] == '?')
        {
            s1[0] = 'R';
            s2[0] = 'B';
        }
        for1(i, n)
        {
            if (s1[i] == '?')
            {
                if (s1[i - 1] == 'R')
                {
                    s1[i] = 'B';
                }
                else
                    s1[i] = 'R';
            }
            if (s2[i] == '?')
            {
                if (s2[i - 1] == 'R')
                {
                    s2[i] = 'B';
                }
                else
                    s2[i] = 'R';
            }
        }
        // deb(s1);
        int count1 = 0, count2 = 0;
        for0(i, n)
        {
            if (s1[i] == s1[i + 1])
                count1++;
            if (s2[i] == s2[i + 1])
                count2++;
        }
        // cout<<count1;
        if (count1 < count2)
            cout << s1;
        else
            cout << s2;
        nn;
    }
    return 0;
}
