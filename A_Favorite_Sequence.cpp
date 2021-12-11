/*
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
