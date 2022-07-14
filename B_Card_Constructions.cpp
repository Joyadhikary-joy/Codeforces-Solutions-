/*
           HAR HAR MAHADEV
              _SPIDER_2.0_
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
#define nn cout << endl;
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
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
const ll N = 1e5 + 3;

bool squre(ll x)
{
    ll y = round(sqrt(x));
    if (y * y == x)
        return 1;
    else
        return 0;
}
ll container[1000000];
ll binarySearch(int low, ll high, ll n)
{

   ll ans = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (container[mid] <= n)
        {
            ans = max(ans, container[mid]);
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
   // cout<<ans;
    return ans;
}

int main()
{
    fio;
    container[0] = 0;
    container[1] = 2;
    for (int i = 2; i < 100000; i++)
    {
        container[i] = container[i - 1] + ll(i - 1) + ll(i * 2); // for h=2 , 2+1+4=7 for h=3 , 7+2+6=15 its a law

        // cout<<container[i];
    }
	int t;
	cin >> t;
	while (t--)
	{
		ll sum = 0;
		ll n;
		cin >> n;
		while (n >= 1)
		{
			ll ans = binarySearch(0,100000,n);
			if (ans == 0)
				break;
			n -= ans;
			sum++;
		}
		cout << sum << endl;
	}
	return 0;
}
