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
}