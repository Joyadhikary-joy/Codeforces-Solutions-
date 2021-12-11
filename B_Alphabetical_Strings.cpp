#include <cstdio>
#include <vector>
 
const int N = 2000;
std::vector<bool> ans[N];
int n, o[N][N];
long long d[N][N], p[N];
 
void run(int l = 0, int r = n - 1, std::vector<bool> prev = std::vector<bool>()) 
{
    if (l == r) ans[l] = prev;
    else {
        prev.push_back(false);
        run(l, o[l][r], prev);
        prev.back() = true;
        run(o[l][r] + 1, r, prev);
    }
}
 
int main() 
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", p + i);
        if (i) p[i] += p[i - 1];
    }
    for (int i = 0; i < n - 1; ++i) {
        o[i][i + 1] = i;
        d[i][i + 1] = p[i + 1] - (i ? p[i - 1] : 0);
    }
    for (int i = 2; i < n; ++i) {
        for (int j = 0; j + i < n; ++j) {
            d[j][j + i] = ~((long long)1 << 63);
            for (int k = o[j][j + i - 1]; k <= o[j + 1][j + i]; ++k) {
                long long x = d[j][k] + d[k + 1][j + i];
                if (x < d[j][j + i]) {
                    d[j][j + i] = x;
                    o[j][j + i] = k;
                }
            }
            d[j][j + i] += p[j + i] - (j ? p[j - 1] : 0);
        }
    }
    run(0, n - 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (int)ans[i].size(); ++j) printf("%d", (int)ans[i][j]);
        printf("\n");
    }
    return 0;
}