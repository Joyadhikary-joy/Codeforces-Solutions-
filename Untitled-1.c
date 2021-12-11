#include "bits/stdc++.h"
 
using namespace std;
 
// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
 
// Constants
constexpr long long SZ = 1e5 + 7;
constexpr long long inf = 1e18;
constexpr long long mod = 1e9 + 7;
constexpr long long MOD = 998244353;
 
// Debug Zone
//
 
// Macros
#define int long long
#define Endl '\n'
#define pb emplace_back
#define fi first
#define se second
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define sz(X) (int)X.size()
#define setbits(X) __builtin_popcountll(X)
#define fix(X) fixed << setprecision(X)
#define mem0(X) memset((X), 0, sizeof((X)))
#define mem1(X) memset((X), -1, sizeof((X)))
 
// Typedefs
typedef long long ll;
typedef long double ld;
 
int tc_cnt = 1;
#define ons()               cout << "Case #" << tc_cnt ++ << ": ";
 
// Helper
void go() {
}
 
void oreo() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
            sum += 2;
        } else if (a[i] == '0' && b[i] == '0') {
            sum += 1;
            if (i - 1 >= 0 && a[i - 1] == '1' && b[i - 1] == '1') {
                sum += 1;
            } else if (i + 1 < n && a[i + 1] == '1' && b[i + 1] == '1') {
                sum += 1;
                a[i + 1] = b[i + 1] = 's';
            }
        }
    }
    cout << sum << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
 
    int t = 1;
    cin >> t;
    while (t--) oreo();
    return 0;
}
 