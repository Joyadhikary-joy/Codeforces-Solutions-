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
        int a, b, n, x = 0, count = 0;
        string s;
        cin >> n;
        cin >> s;
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                break;
            }
            else
            {
                count++;
            }
        }
        a = n - count;
        if (count > a)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}