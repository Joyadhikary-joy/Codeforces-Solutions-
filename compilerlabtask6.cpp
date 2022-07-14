#include <bits/stdc++.h>
#include <cstring>
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
    for (int m = 0; m < n; m++)// index
    {
        string st;
        st = vt[m].r;  
        for (int j = m + 1; j < n; j++)// right
        {
            if (st == vt[j].r)
            {
                flag = 0;
                for (int i = m + 1; i < j; i++)// left 
                {
                    for (int k = 0; k < st.size(); k++)// string 
                    {
                        if (vt[i].l == st[k])
                        {
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
    cout << "The resultant intermediate codes after elimination of subexpression ==> ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << vt[i].l << " = " << vt[i].r << endl;
}
/* 4 a b+C b a-d c b+c d a-d */