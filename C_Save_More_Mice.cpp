/*
                             🔱  🕉 ॐ नमः शिवाय  🔱
<<<<<<< HEAD
 
                                 _SPIDER_2.0_
 
 
=======

                                 _SPIDER_2.0_


>>>>>>> 8th time
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
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
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
//const ll N=1e5+3;
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
int main()
{
    fio;
    test
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        int ar[k];
        for0(i, k)
        {
            cin >> ar[i];
        }
        sort(ar, ar + k);
<<<<<<< HEAD
        int x = n / 2, rem = 0, count = 0,cat_position=0;
        for9(i, k)
        {
            if(ar[i]>cat_position)
            {
                cat_position=n-ar[i]+cat_position;
=======
        int x = n / 2, rem = 0, count = 0;
        for9(i, k)
        {
            if (ar[i] > rem)
            {
                rem = (n - ar[i]) + rem;
>>>>>>> 8th time
                count++;
            }
            else
                break;
        }
        cout << count;
        nn;
    }
    return 0;
}