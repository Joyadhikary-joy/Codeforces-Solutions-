/*
                             🔱  🕉 ॐ नमः शिवाय  🔱

                                 _SPIDER_2.0_


*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

struct joy_optimyzation
{
    char l;
    string r;
};
int main()
{
    vector<joy_optimyzation> vt(50);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].l >> vt[i].r;
    }

    int flag;
    for (int m = 0; m < n; m++) // index
    {
        string st;
        st = vt[m].r;
        for (int j = m + 1; j < n; j++) // right
        {
            if (st == vt[j].r)
            {
                flag = 0;
                for (int i = 0; i < j; i++) // left
                {
                    for (int k = 0; k < st.size(); k++) // string
                    {
                        if (vt[i].l == st[k])
                        {
                            nn;
                            cout << st;
                            nn;
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag != 1)
                {
                    vt[j].r.clear();
                    vt[j].r.push_back(vt[m].l);
                }
            }
        }
    }
    cout << endl;
    cout << "After eliminating all the common sub-expressions ==> ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << vt[i].l << " = " << vt[i].r << endl;
}