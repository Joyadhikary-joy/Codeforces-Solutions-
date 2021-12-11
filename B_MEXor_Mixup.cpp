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
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;

int computeXOR(int n)
{

   // If n is a multiple of 4
   if (n % 4 == 0)
      return n;

   // If n%4 gives remainder 1
   if (n % 4 == 1)
      return 1;

   // If n%4 gives remainder 2
   if (n % 4 == 2)
      return n + 1;

   // If n%4 gives remainder 3
   return 0;
}

int main()
{
   fio;
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, ans, remainde = 0;
      cin >> a >> b;
      ans = a;
      int xortilla = computeXOR(a - 1); // xor of 0 1 2 3 4 ..... a-1
      for (int i = 30; i >= 0; i--)
      {
         //bit mismatch in current xor and requried xor 
         // current 0 and requried 1
         if (((1 << i) & b) and !((1 << i) & xortilla))// b-1     xortilla =0
         {
            remainde ^= (1 << i);
         }
         // current 1 and requried 0
         else if (!((1 << i) & b) and ((1 << i) & xortilla))// b-0    xortilla =1
         {
            remainde ^= (1 << i);
         }
      }
      if (remainde == 0)
      {

      }
      else if (remainde == a)
      {
         ans += 2;
      }
      else
         ans++;
      cout << ans;
      nn;
   }
      /*
      if (b == xortilla)
      {
         cout << a;
      }
      else if ((xortilla ^ b) == a)
      {
         cout << a + 2;
      }
      else
      {
         cout << a + 1;
      }
      nn;
   }
   */

      return 0;
   }