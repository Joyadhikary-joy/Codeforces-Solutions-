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
#define nn cout << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;

int main()
{
   fio;
   int t;
   cin >> t;
   while (t--)
   {
      ll sum = 0, ans = 0, a, b, c;
      int n, m;
      string s2, s1;
      cin >> n;
      cin >> s1;
      cin >> s2;

      for0(i, n)
      {
         if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
         {
            ans += 2;
         }
         else if (s1[i] == '0' && s2[i] == '0')
         {
            ans++;
            if (i - 1 >= 0 && s1[i - 1] == '1' && s2[i - 1] == '1')
            {
               ans++;
            }
            else if (i + 1 < n && s1[i + 1] == '1' && s2[i + 1] == '1')
            {
               ans++;
               s1[i + 1] = s2[i + 1] = 's';
            }
         }
      }
      cout << ans;
      nn;
   }
   return 0;
}
