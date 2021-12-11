/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][199], b, x, n, sum = 0, sum1 = 0;
    cin >> n;
    x = (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
            if ((i + j) == (n - 1))
            {
                sum += a[i][j];
            }
            if (i == x)
            {
                sum += a[i][j];
            }
            if (j == x)
            {
                sum += a[i][j];
            }
        }
    }
    b = a[x][x];
    cout << sum - 3 * b;
    return 0;
}