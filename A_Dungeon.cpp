/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c, s, b, k = 0;
        cin >> a >> b >> c;
        s = a + b + c;
        int x = s / 9;
        if (s < 8)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(s%9==0)
            {
                 if (a > x && b > x && c > x)
            {
                cout << "YES" << endl;
            }
             else
                cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}
