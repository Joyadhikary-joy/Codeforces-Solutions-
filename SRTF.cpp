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
struct process
{
    int pid;
    int arrival_time;
    int burst_time;
    int start_time;
    int cmp_time;
    int turn_t;
    int waiting_time;
    int response_time;
};
int main()
{

    int x;
    struct process p[100];
    float aturn_t;
    float awaiting_t;
    float ares_t;
    float cpu_utilization;
    int tturnaround_t = 0;
    int twating_t = 0;
    int tresponse_t = 0;
    int total_idle_time = 0;
    float throughput;
    int burst_re[100];
    int is_completed[100];
    memset(is_completed, 0, sizeof(is_completed));

    cout << setprecision(2) << fixed;

    cout << "process number ==>>";
    cin >> x;

    for0(i, x)
    {
        cout << "Enter arrival time ofthe process " << i + 1 << ": ";
        cin >> p[i].arrival_time;
        cout << "Enter burst time of the process " << i + 1 << ": ";
        cin >> p[i].burst_time;
        p[i].pid = i + 1;
        burst_re[i] = p[i].burst_time;
        cout << endl;
    }

    int current_time = 0;
    int completed = 0;
    int prev = 0;

    while (completed != x)
    {
        int idx = -1;
        int mn = 10000000;
        for (int i = 0; i < x; i++)
        {
            if (p[i].arrival_time <= current_time && is_completed[i] == 0)
            {
                if (burst_re[i] < mn)
                {
                    mn = burst_re[i];
                    idx = i;
                }
                if (burst_re[i] == mn)
                {
                    if (p[i].arrival_time < p[idx].arrival_time)
                    {
                        mn = burst_re[i];
                        idx = i;
                    }
                }
            }
        }

        if (idx != -1)
        {
            if (burst_re[idx] == p[idx].burst_time)
            {
                p[idx].start_time = current_time;
                total_idle_time += p[idx].start_time - prev;
            }
            burst_re[idx] -= 1;
            current_time++;
            prev = current_time;

            if (burst_re[idx] == 0)
            {
                p[idx].cmp_time = current_time;
                p[idx].turn_t = p[idx].cmp_time - p[idx].arrival_time;
                p[idx].waiting_time = p[idx].turn_t - p[idx].burst_time;
                p[idx].response_time = p[idx].start_time - p[idx].arrival_time;

                tturnaround_t += p[idx].turn_t;
                twating_t += p[idx].waiting_time;
                tresponse_t += p[idx].response_time;

                is_completed[idx] = 1;
                completed++;
            }
        }
        else
        {
            current_time++;
        }
    }

    int min_arrival_time = 10000000;
    int max_cmp_time = -1;
    for (int i = 0; i < x; i++)
    {
        min_arrival_time = min(min_arrival_time, p[i].arrival_time);
        max_cmp_time = max(max_cmp_time, p[i].cmp_time);
    }

    aturn_t = (float)tturnaround_t / x;
    awaiting_t = (float)twating_t / x;
    ares_t = (float)tresponse_t / x;
    cpu_utilization = ((max_cmp_time - total_idle_time) / (float)max_cmp_time) * 100;
    throughput = float(x) / (max_cmp_time - min_arrival_time);

    cout << endl
         << endl;

    cout << "Process\t"
         << "Arrival Time\t"
         << "Burst Time\t"
         << "ST\t"
         << "CT\t"
         << "TAT\t"
         << "WT\t"
         << "RT\t"
         << "\n"
         << endl;

    for (int i = 0; i < x; i++)
    {
        cout << p[i].pid << "\t" << p[i].arrival_time << "\t" << p[i].burst_time << "\t" << p[i].start_time << "\t" << p[i].cmp_time << "\t" << p[i].turn_t << "\t" << p[i].waiting_time << "\t" << p[i].response_time << "\t"
             << "\n"
             << endl;
    }
    cout << "Average Turnaround Time = " << aturn_t << endl;
    cout << "Average Waiting Time = " << awaiting_t << endl;
    cout << "Average Response Time = " << ares_t << endl;
    cout << "CPU Utilization = " << cpu_utilization << "%" << endl;
    cout << "Throughput = " << throughput << "pro/unit" << endl;
}