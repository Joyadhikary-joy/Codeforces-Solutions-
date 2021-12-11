#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int x,n;
    cin >> x>>n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low=0,high=n,id=0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ( a[mid]==x)
        {
             id = mid;
            break;
        }
        if( x > a[mid])
        {
            low = mid + 1;
        }
         if (x < a[mid])
        {
            high = mid - 1;
        }
    }
    cout<<id;
}