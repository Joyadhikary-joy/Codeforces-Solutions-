/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, x = 0, t = 0,count=0;
    cin >> n >> k;
    int a[199];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[k-1] == 0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= a[k - 1])
            {
                x++;
            }
        }
        cout << x-count;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= a[k - 1])
            {
                x++;
            }
        }
        cout << x;
    }
    return 0;
}