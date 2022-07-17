<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int computeXOR(int n)
{

   // If n is a multiple of 4
   if (n % 4 == 0)
      return n;

   // If n%4 gives remainder 1
   if (n % 4 == 1)
      return 1;

   // If n%4 gives remainder 2
   if (n % 4 == 2)
      return n + 1;

   // If n%4 gives remainder 3
   return 0;
}
void solve()
{
   int a, b;
   cin >> a >> b;
   int tot = a;
   int x = computeXOR(a - 1);
   int rem = 0;
   for (int i = 30; i >= 0; i--)
   {
      if (((1 << i) & b) and !((1 << i) & x))
      {
         rem ^= (1 << i);
      }
      else if (!((1 << i) & b) and ((1 << i) & x))
      {
         rem ^= (1 << i);
      }
   }
   if (rem == 0)
   {
   }
   else if (rem != a)
   {
      tot++;
   }
   else
   {
      tot += 2;
   }
   cout << tot;
   cout << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   t = 1;
   cin >> t;
   while (t--)
   {
      solve();
   }
=======
/* 
                            ॐ नमो नारायणाय

                            ॐ नमः शिवाय  

                            _Karn_2.0_
                               
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))


 
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	
	sort(all(a));
	if(n % 2){
		cout << "NO\n";
		return;
	}
	vector<int> b(n);
	rep(i,0,n/2){
		b[2 * i] = a[n/2 + i];
		b[2 * i + 1] = a[i + 1];
	}
	b[n-1] = a[0];
	
	rep(i,0,n){
		int prev = (i - 1 + n) % n;
		int next = (i + 1) % n;
		// cout << prev << " " << 
		if((b[i] > b[prev] && b[i] > b[next]) || (b[i] < b[prev] && b[i] < b[next])){
			
		}
		else{
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";
	rep(i,0,n){
		cout << b[i] << " ";
	}
	cout << "\n";
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
>>>>>>> 8th time
}