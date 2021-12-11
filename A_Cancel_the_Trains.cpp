/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, n;
 
   // int a[200], b[299];
    cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
           map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
         int x;
         cin>>x;
         mp[x]++;
        }
        for (int i = 0; i < m; i++)
        {
         int x;
         cin>>x;
         mp[x]++;
        }
        int count = 0;
       for(int i=0;i<101;i++)
       {
           if(mp[i]>=2)
           {
               count++;
           }
 
       }
       cout<<count<<endl;
    }
    return 0;
}