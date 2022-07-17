/*
              HAR HAR MAHADEV
               _SPIDER_2.0
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
#define nn cout << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define deb(a) cerr << "Line " << _LINE_ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;
const int mx = 1000;

int i = 0;
char l[100];
bool S();
bool A();
bool D();
bool S()
{
    if (A())
    {
        if (D())
            return true;
        else
        {
            cout << "not Matched. Backtrack to S" << endl;
            return false;
        }
    }
    else
    {
        cout << "not Matched. Backtrack to S" << endl;
        return false;
    }
}
bool A()
{
    if (l[i] == 'b')
    {
        cout << "matched b" << endl;
        i++;
        if (D())
        {
            if (l[i] == 'a')
            {
                cout << "matched a" << endl;
                i++;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool D()
{
    if (l[i] == 'a')
    {
        cout << "matched a" << endl;
        i++;
        if (D())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (l[i] == 'c')
    {
        cout << "matched c" << endl;
        i++;
        return true;
    }
    else
        false;
}
main()
{
    cout << "Enter the input string : ";
    cin>>l;
    if (S())
    {
        cout << "The string is successfully parsed." << endl;
    }
    else
    {
        cout << "The string is not successfully parsed." << endl;
    }
}