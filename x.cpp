#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,int >mp;
    map<int,char >mmp;
    int  x=5;
    for(int i=9;i>0;i--){
            mp[i]=x;
            x--;
    }

    char ch='a';
    for(int i=1;i<10;i++){
        mmp[i]=ch;
        ch++;
    }
    for(auto x: mp){
       cout<<"first ==>"<< x.first<<" ";
       cout<<"second ==> "<<x.second<<endl;
    }
    cout<<endl;
     for(auto x: mmp){
       cout<<"first ==> "<< x.first<<" ";
       cout<<"second ==> "<<x.second<<endl;
    }
}