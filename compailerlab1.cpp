/*

                        HAR HAR MAHADEV
                           _SPIDER_2.0                      */

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
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)

bool joy062(string x, ll n)
{
    int count = 0;
    if (!((x[0] >= 'a' && x[0] <= 'z') || (x[0] >= 'A' && x[0] <= 'Z') || x[0] == '_'))
        return false;
    for1(i, n - 1)
    {
        if (!((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= '0' && x[i] <= '9') || x[i] == '_'))
            return false;
    }
    return true;
}

int main()
{
    fio;
    string x;
    while (cin >> x && x != "exit")
    {
        ll n = x.length();
        if (joy062(x, n))
            cout << " valid " << endl;
        else
            cout << " invalid " << endl;
    }
    return 0;
}