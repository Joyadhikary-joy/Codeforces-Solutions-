#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0, count = 0;
    cin >> n;
   vector<int> a(n);
   vector<int>b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
 sort(b.begin(), b.end(), greater<int>());
 int y=b[0];
    for (int i = 0; i < n; i++)
    { 
        if (y <= x)
        {
            count++;
        }
     y+=b[i];
    }

    cout << count +1;
}