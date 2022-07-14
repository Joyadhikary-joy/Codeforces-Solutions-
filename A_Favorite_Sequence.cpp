/*
<<<<<<< HEAD
           HAR HAR MAHADEV
              _SPIDER_ 
                                 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n+2],b[n+2],c[n+2];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      if(n>=2)
      {
          for(int i=0;i<n;i++)
          {
              cout<<a[i]<<" ";
          }
           cout<<endl;
      }
      else if(n%2==0)
      {
           int x[n];
          int k=n/2;
          for(int i=0;i<k;i++)
          {
            x[i]=a[i];
          }
          int p=0;
          for(int j=k;j<n-1;j++)
          {
              b[p]=a[j];
              p++;
          }
          sort(b, b + k, greater<int>());

          for(int i=0;i<n;i++)
          {
              if(i%2==0)
              {  
                  c[i]=x[i];

              }
              else {
                  c[i]=b[i-1];
              }
          }
          for(int i=0;i<n;i++)
          {
              cout<<c[i]<<" ";
          }
           cout<<endl;

      }
      else { 
          int x[n];
          int k=n/2;
          for(int i=0;i<=k;i++)
          {
            x[i]=a[i];
           
          }
          int p=0;
          for(int j=k;j<n-1;j++)
          {
              b[p]=a[j];
              p++;
          }
          sort(b, b + k, greater<int>());
          for(int i=0;i<n;i++)
          {
              if(i%2==0)
              {  
                  c[i]=x[i];

              }
              else {
                  c[i]=b[i-1];
              }
          }
          for(int i=0;i<n;i++)
          {
              cout<<c[i]<<" ";
          }
          cout<<endl;
      }
  }
}
=======
                             🔱  ॐ नमः शिवाय  🔱

                               _SPIDER_2.0_


*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

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

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define mp make_pair
#define nn cout << '\n';
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
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;

//                                            DEBUG SECTION

#define debug(a)                                             \
    cerr << "Line " << __LINE__ << " ## " << #a << " -->> "; \
    _print(a);                                               \
    cerr << endl;

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

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

int main()
{
    fio;
    ll t;
    cin >> t;
    while (t--)
    {
        /*
        int n, x;
        cin >> n;
        int l = 0, r = n-1,j=0;
        vll a(n);
        vll b(n);
        for0(i, n)
        {
            cin >> a[i];
        }
      for(int k=0;k<n;k++){
          if(k&1){
              b[k]=a[r--];
          }
          else {
              b[k]=a[l++];
          }
        }
        for0(i,n){
            cout<<b[i]<<" ";
        }
        nn;
    } */
     ll n;
     cin>>n;
      vll a(n);
      for0(i,n){
          cin>>a[i];
      }
      
      for(int i=0,j=n-1;i<j;i++,j--){
          cout<<a[i]<<" "<<a[j]<<" ";
      }
      if(n&1){
          cout<<a[n/2];
      }
      nn;
    }
    return 0;
}
>>>>>>> 8th time
