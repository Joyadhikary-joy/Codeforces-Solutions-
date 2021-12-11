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
#define    mp1          make_pair
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


int main()
{
   fio;
   map<char,ll> mp;
    mp['q'] = 9 ;
    mp['Q'] = 9 ;
    mp['r'] = 5 ;
    mp['R'] = 5 ;
    mp['b'] = 3 ;
    mp['B'] = 3 ;
    mp['n'] = 3 ;
    mp['N'] = 3 ;
    mp['p'] = 1 ;
    mp['P'] = 1 ;
    mp['k'] = 0 ;
    mp['K'] = 0 ;

   ll x=0,w=0,b=0,p,d;
   string s;
   char ch;
   loop(i,0,8)
   {
       //cin>>s;
     
      /* loop(j,0,8)
       {
           if(s[j]=='Q')
           {
               w=w+9;
           }
            if(s[j]=='R')
           {
               w=w+5;
           }
            if(s[j]=='B')
           {
               w=w+3;
           }
            if(s[j]=='N')
           {
               w=w+3;
           }
            if(s[j]=='P')
           {
               w=w+1;
           }
             if(s[j]=='q')
           {
               b=b+9;
           }
            if(s[j]=='r')
           {
               b=b+5;
           }
            if(s[j]=='b')
           {
               b=b+3;
           }
            if(s[j]=='n')
           {
               b=b+3;
           }
            if(s[j]=='p')
           {
               b=b+1;
           }
       }*/
         loop(i,0,8)
       {  
           cin>>ch;
           if(ch>='A' && ch<='Z')
           {
               w+=mp[ch];
           }
          else if(ch>='a'&& ch<='z')
          {
              b+=mp[ch];
          }
           
       }

   }
   if(b<w)
   {
       cout<<"White"<<endl;
   }
   else if(b==w)
   {
       cout<<"Draw"<<endl;
   }
   else cout<<"Black"<<endl;
   return 0; 
}