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
#define test  \
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
   string s;
   ll k, n1 = 0;
   cin >> s;
   cin >> k;
   ll x, p, a,  i, j, n;
   n = s.size() % k;
   p = s.size() / k;
   bool m = 0;
   int st = 0;
   //p = s.size() / k;
   if (n)
   {
      cout << "NO" << endl;
   }
   else
   {
      while (k--)
      {
         
         for (i = st, j = 1; i < st + p; i++, j++)
         {
           // deb(st);
            if (s[i] != s[ st+ p - j])
            {
               m = 1;
               break;
            }
           
            if (m)
            {
               break;
            }
             
         }
         st = st + p;
      }
     // deb(m);
      if (m)
      {
         cout << "NO" << endl;
      }
      else
         cout << "YES" << endl;
   }

   return 0;
}