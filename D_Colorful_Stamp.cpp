/*
<<<<<<< HEAD
                               ॐ नमः शिवाय
 
                                 _Karn_
 
 
=======
                               ॐ नमः शिवाय  

                               _Karn_2.0_


>>>>>>> 8th time
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pp pop_back
<<<<<<< HEAD
#define mp make_pair
=======
#define mpp make_pair
>>>>>>> 8th time
#define nn cout << '\n';
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
<<<<<<< HEAD
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e9 + 5;
 
//                                            DEBUG SECTION
 
#define debug(a)                                             \
    cerr << "Line " << __LINE__ << " ## " << #a << " -->> "; \
    _print(a);                                               \
    cerr << endl;
 
void _print(ll t)
{
    cerr << t;
}
=======
#define test \
  int t, tc; \
  cin >> t;  \
  for (tc = 0; tc < t; tc++)
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (long long i = 0; i < n; i++)
#define for1(i, n) for (long long i = 1; i <= n; i++)
#define loop(i, a, b) for (long long i = a; i < b; i++)
#define for9(i, n) for (long long  i = n - 1; i >= 0; i--)
const ll N = 1e9 + 5;

//                                            DEBUG SECTION

#define debug(a)                                           \
  cerr << "Line " << __LINE__ << " ## " << #a << " -->> "; \
  _print(a);                                               \
  cerr << endl;

void _print(ll t) { cerr << t; }
>>>>>>> 8th time
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
<<<<<<< HEAD
 
bool sortbysec(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return (a.second > b.second);
}
// check the type of pair first
 
int main()
{
    fio;
    return 0;
=======

bool sortbysec(const pair<string,ll> &a, const pair<string ,ll> &b)
{
    return (a.second > b.second);
}
// check the type of pair first 

int main()
{
  fio;
  test{
      ll n,i=0,x,count=0,ans=0;
      string s;
      cin>>n;
      cin>>s;
      for0(i,n){
           while(i<n and s[i]=='W')i++;
          if(i==n){
              break;
          }
          ll count_red=0,count_blue=0;
          while(i<n and s[i]!='W'){
              if(s[i]=='R')count_red++;
              else if(s[i]=='B')count_blue++;
          i++;
          }
          if(count_blue==0 || count_red==0){
              ans++;
              break;
          }
      }
      if(ans){
                  NO;
      }
      else YES;
  }

  return 0;
>>>>>>> 8th time
}