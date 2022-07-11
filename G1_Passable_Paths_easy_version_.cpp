#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            // unordered_set<int>s;
            // s.insert(a);
            int p1=-1,p2=-1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==a)
                {
                    p1=i;
                    break;
                }
                    
            }
            
            for(int i=0;i<n;i++)
            {
                if(arr[i]==b)
                {
                    p2=i;
                    break;
                }
                    
            }
            
            if(p1==-1 || p2==-1)
                cout<<"NO"<<endl;
            else if(p1<=p2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            
            // if(s.size()<2)
            //     cout<<"NO"<<endl;
            
        }
        
        
    }
    
    
    
    return 0;
}