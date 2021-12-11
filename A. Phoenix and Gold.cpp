/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                  */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fio;
    //ll sum=0, x,p,n,a[102],w,b[103];
    test
    {
        ll sum = 0, x, p, n, a[102], w, b[103];
        cin >> n >> x;
        ll sum1 = 0, sum2 = 0, flag = 0;
        for0(i, n)
        {
            cin >> a[i];
            b[i] = a[i];
            sum += a[i];
        }
        if (sum == x)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(b, b + n);
            sort(a, a + n, greater<int>());
            for0(i, n)
            {
                sum1 += b[i];
                if (sum1 == x)
                {
                     swap(b[i],b[i+1]);
                }
            }
            cout << "YES" << endl;
                for0(i, n)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
           /* if (flag == 0)
            {
                cout << "YES" << endl;
                for0(i, n)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
            }
            else if (flag == 1)
            {
                p=n/2;
                cout << "YES" << endl;
                cout << a[p+1] << " ";
                for0(i, n)
                {
                    if (i ==(p+1))
                        continue;
                    else
                    {
                        cout << a[i] << " ";
                    }
                }
                cout << endl;
            }*/
        }
    }
}