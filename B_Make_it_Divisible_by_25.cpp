/*
                             🔱  🕉 ॐ नमः शिवाय  🔱
<<<<<<< HEAD

=======
							 
>>>>>>> 8th time
                                 _SPIDER_2.0_

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
<<<<<<< HEAD
#define test  \
   int t, tc; \
   cin >> t;  \
   for (tc = 0; tc < t; tc++)
=======
#define test   \
	int t, tc; \
	cin >> t;  \
	for (tc = 0; tc < t; tc++)
>>>>>>> 8th time
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
<<<<<<< HEAD
// const ll N=1e5+3;

int substringcheck(string s, string s2)
{
   int n = s.size();
   int i = n - 1, count = 0, ans = 0;
   while (i >= 0 && s[i--] != s2[1])
   {
      count++;
   }
   while (i >= 0 && s[i--] != s2[0])
   {
      count++;
   }
   return count;
}
int main()
{
   fio;
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      int f5 = 0, f2 = 0, f7 = 0, z = 0, count0 = 0, count5 = 0;
      cin >> s;
      f5 = substringcheck(s, "50");
      f2 = substringcheck(s, "25");
      f7 = substringcheck(s, "75");
      z  = substringcheck(s, "00");
      int ans = min({f5, f2, f7, z});
      cout << ans;
      nn;
   }
   return 0;
}
=======
//const ll N=1e5+3;

int substringcheck(string s, string s2)
{
	int n = s.size();
	int i = n - 1, count = 0, ans = 0;
	while (i >= 0 && s[i--] != s2[1])
	{
		count++;
	}
	while (i >= 0 && s[i--] != s2[0])
	{
		count++;
	}
	return count;
}
int main()
{
	fio;
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		int f5 = 0, f2 = 0, f7 = 0, z = 0, count0 = 0, count5 = 0;
		cin >> s;
		f5 = substringcheck(s, "50");
		f2 = substringcheck(s, "25");
		f7 = substringcheck(s, "75");
		z = substringcheck(s, "00");
		int ans = min({f5,f2,f7,z});
		cout << ans;
		nn;
	}
	return 0;
}
>>>>>>> 8th time
