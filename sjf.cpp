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
int joy[10][6];

void swap(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}

void changearivel(int input, int joy[][6])
{
	for0(i, input)
	{
		for0(j, (input - i - 1))
		{
			if (joy[j][1] > joy[j + 1][1])
			{
				for0(k, 5)
				{
					swap(joy[j][k], joy[j + 1][k]);
				}
			}
		}
	}
}

void completionTime(int input, int joy[][6])
{
	int x, val;
	joy[0][3] = joy[0][1] + joy[0][2];
	joy[0][5] = joy[0][3] - joy[0][1];
	joy[0][4] = joy[0][5] - joy[0][2];

	for (int i = 1; i < input; i++)
	{
		x = joy[i - 1][3];
		int low = joy[i][2];
		for (int j = i; j < input; j++)
		{
			if (x >= joy[j][1] && low >= joy[j][2])
			{
				low = joy[j][2];
				val = j;
			}
		}
		joy[val][3] = x + joy[val][2];
		joy[val][5] = joy[val][3] - joy[val][1];
		joy[val][4] = joy[val][5] - joy[val][2];
		for (int k = 0; k < 6; k++)
		{
			swap(joy[val][k], joy[i][k]);
		}
	}
}

int main()
{
	int input, x;

	cout << "Enter number of Process: ";
	cin >> input;

	cout << "Process ID ==>> \n";
	for0(i, input)
	{
		cout << "Process num " << i + 1 << "...\n";
		cout << "Enter Process Id ==> ";
		cin >> joy[i][0];
		cout << "Enter Arrival Time ==>> ";
		cin >> joy[i][1];
		cout << "Enter Burst Time ==>> ";
		cin >> joy[i][2];
	}

	changearivel(input, joy);
	completionTime(input, joy);
	cout << "after sjf algorithome applied ==> \n";
	cout << "Process ID\tArrival Time\tBurst Time\tWaiting "
			"Time\tTurnaround Time\n";
	for0(i, input)
	{
		cout << joy[i][0] << "\t\t" << joy[i][1] << "\t\t"
			 << joy[i][2] << "\t\t" << joy[i][4] << "\t\t"
			 << joy[i][5] << "\n";
	}
	return 0;
}