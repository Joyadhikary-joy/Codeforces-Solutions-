/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                  */
                                 

#include <bits/stdc++.h>
using namespace std;

typedef    long long             ll;
typedef    long double           ld;
typedef    pair<int,int>         pii;
typedef    pair<ll,ll>           pll;
typedef    map<ll,ll>            ml;
typedef    map<string ,ll>       ms;
typedef    vector<int>           vi;
typedef    vector<ll>            vll;
typedef    vector<vector<int>>   vvi;
typedef    vector<vector<long long>>   vvll;

#define    ff          first
#define    ss          second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    NO          cout<<"NO"<<endl;
#define    YES         cout<<"YES"<<endl;
#define    no          cout<<"No"<<endl;
#define    yes         cout<<"Yes"<<endl;
#define    all(x)      (x).begin(),(x).end()
#define    Sort(s)     sort(s.begin(),s.end())
#define    test        int t, tc; cin>>t; for( tc = 0;tc < t ; tc++)
#define    deb(a)      cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define    fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define    gcd(a,b)     __gcd(a , b)
#define    lcm(a,b)    (a*(b/__gcd(a,b)))
#define    for0(i, n)   for (int i = 0; i < n; i++)
#define    for1(i, n)   for (int i = 1; i <= n; i++)
#define    loop(i,a,b)  for (int i = a; i < b; i++)
#define    for9(i, n)   for (int i = n - 1; i >= 0; i--)
const ll N=1e5+3;


vll adj[N];
vll vis(N, 0);
ll level,mx=1;

void dfs(ll source)
{
    vis[source] = 1;
    for (int i = 0; i < adj[source].size(); i++)
    {
        int nxt = adj[source][i];
        if (vis[nxt] == 0)
        {
            level++;
            dfs(nxt);
            mx=max(mx,level);
            level--;

        }
    }
}


int main()
{
   fio;
   ll n;
   cin>>n;
  ll a[n+5];
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       if(a[i]!=-1)
       {
           adj[a[i]].push_back(i);
           adj[i].push_back(a[i]);
       }
   }
   
   for(int i=1;i<=n;i++)
   {
       if(vis[i]==0 && a[i]==-1)
       {
           level=1;
           dfs(i);
           mx=max(mx,level);
       }
   }
   cout<<mx;
   return 0; 
}