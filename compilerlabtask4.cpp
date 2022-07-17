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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const int mx = 1000;
int i = 0;
char str[1000];
bool E();
bool F();
bool A();
bool E()
{
    if (F())
    {
        if (A())
            return true;
        else
            return false;
    }
    else
        return false;
}
bool F()
{
    if (str[i] == '(')
    {
        i++;
        E();
    }
    else if (str[i] == 'a')
    {
        i++;
        return true;
    }
    else if (str[i] == ')')
    {
        i++;
        return true;
    }
    else
        return false;
}
bool A()
{
    if (str[i] == '+')
    {
        i++;
        if (F())
        {
            if (A())
            {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return true;
}
main()
{
    cout << "Enter the input string : ";
    cin.get(str, mx, '$');
    if (E())
    {
        cout << "The string is successfully parsed" << endl;
    }
    else
    {
        cout << "The string is not successfully parsed" << endl;
    }
    return 0;
    //a++a
    //(a+a)+a
}