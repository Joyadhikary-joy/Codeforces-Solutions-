<<<<<<< HEAD
/*
           HAR HAR MAHADEV
              _SPIDER_ 
                                  */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double   dd;
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
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)

dd fu(dd x)
{
    return x * x  - 3;
}

void checkfolsi(dd a, dd b, dd x)
{
    if (fu(a) * fu(b) >= 0)
    {
        cout << " access denied !!! " << endl;
        cout << " Please enter right a and b\n";
        return;
    }

    dd c = a;
     ll k=0;
for0(i, 100000) 
    {  
        while ((b-a) >= x){
       
        c = (a * fu(b) - b * fu(a)) / (fu(b) - fu(a));

        if (fu(c) == 0)
            break;

        else if (fu(c) * fu(a) < 0)
            b = c;
        else
            a = c;

            k++;
    }
    }
    cout << "The value of root is --> " << c<<endl;
    cout<<k;
}

int main()
{
    //fio;
     dd a=1, b=2, c=0.01;
    checkfolsi(a, b,c);
=======
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    fastio
        // cout<<setprecision(20)<<fixed ;
        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++)
        {
            p[i] = {a[i], b[i]};
        }
        sort(all(a)), sort(all(b));
        vector<pair<int, int>> ans;
        bool fail = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (p[j] == make_pair(a[i], b[i]))
                {
                    swap(p[i], p[j]);
                    if (i != j)
                    {
                        ans.emplace_back(i, j);
                    }
                    break;
                }
            }
            if (p[i] != make_pair(a[i], b[i]))
            {
                fail = true;
                break;
            }
        }
        if (fail)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans.size() << endl;
            for (auto [x, y] : ans)
            {
                cout << x + 1 << " " << y + 1 << endl;
            }
        }
    }
>>>>>>> 8th time
    return 0;
}