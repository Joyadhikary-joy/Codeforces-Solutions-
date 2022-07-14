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

int main()
{
    fio;
    string comment, strmain;
    char str[1000];
    cin.get(str, mx, '$');
    int n = strlen(str);
    bool single_line = false;
    bool multi_line = false;
    for0(i, n)
    {
        if (str[i] == '/' && str[i + 1] == '/')
        {
            single_line = true;
        }
        else if (str[i] == '/' && str[i + 1] == '*')
        {
            multi_line = true;
        }
        else if (single_line == true && str[i] == '\n')
        {
            single_line = false;
            comment += '\n';
          //  comment += " ";
            strmain+='\n';
        }
        else if (multi_line == true && str[i] == '*' && str[i + 1] == '/')
        {
            multi_line = false;
            i++;
            comment += '\n';
            comment += " ";
            strmain+='\n';
            
        }
        else if (multi_line || single_line)
        {
            if (str[i] == '/' || str[i] == '*')
            {
                continue;
            }
            else
                comment += str[i];
        }

        else
            strmain += str[i];
    }
    nn;
    cout << "Given proggram ==> ";
    nn;
    nn;
    cout << str;
    nn;
    nn;
    cout << "After removing of comments, proggram will look like this ==> ";
    nn;
    nn;
    cout << strmain;
    nn;
    nn;
    cout << "So the comments which has been removed ==>> ";
    nn;
    nn;
    cout << comment;
    nn;
    nn;
    return 0;

    
}