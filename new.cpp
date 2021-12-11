#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2="abc";
    int i=s.size()-1;
    int c=0;
    while(i>=0 && s[i--]!=s2[2])
    {
        c++;
    }
       while(i>=0 && s[i--]!=s2[1])
    {
        c++;
    }
       while(i>=0 && s[i--]!=s2[0])
    {
        c++;
    }
    cout<<c;

}