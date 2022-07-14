/*
                             🔱  ॐ नमः शिवाय  🔱

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
const ll N = 1e5 + 3;

void show(priority_queue<int> g)
{
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    nn;
}

void show_mini(priority_queue<int, vector<int>, greater<int>> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    nn;
}

int main()
{
    fio;
    priority_queue<int> pq; // max-heap priority queue.
    pq.push(55);
    pq.push(5);
    pq.push(560);
    pq.push(665);
    pq.push(50);
    pq.push(1);
    pq.push(100);
    show(pq);
    cout << "size of p_queue ==> " << pq.size();
    nn;
    pq.pop();
    cout << "after poping top , new p_queue top ==> " << pq.top();
    nn;nn;
    cout << "                        priority queue in min heap                     ";
    nn;nn;
    priority_queue<int, vector<int>, greater<int>> pqmini; // min-heap  priority queue.
    pqmini.push(55);
    pqmini.push(5);
    pqmini.push(560);
    pqmini.push(665);
    pqmini.push(50);
    pqmini.push(1);
    pqmini.push(100);
    show_mini(pqmini);
    cout << "size of p_queue ==> " << pqmini.size();
    nn;
    pqmini.pop();
    cout << "after poping top , new p_queue top ==> " << pqmini.top();
    nn;
    return 0;
}
