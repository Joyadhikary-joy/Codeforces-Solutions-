#include <bits/stdc++.h>
using namespace std;
 
int n, k;
 
double sum[200007];
double rev[200007];
double pre[200007];
 
double inf;
 
double dpo[200007];
double dpn[200007];
 
double x[200007];
double y[200007];
 
int tsa, tsb, tss;
vector <int> sta;
 
inline double vec(int s, int a, int b)
{
    return (x[a]-x[s])*(y[b]-y[s])-(x[b]-x[s])*(y[a]-y[s]);
}
 
int main()
{
    inf=1000000000.0;
    inf*=inf;
    scanf("%d%d", &n, &k);
    for (int i=1; i<=n; i++)
    {
        scanf("%lf", &sum[i]);
        pre[i]=pre[i-1]+sum[i-1]/sum[i]+1.0;
        rev[i]=1.0/sum[i]+rev[i-1];
        sum[i]+=sum[i-1];
    }
    for (int i=1; i<=n; i++)
    {
        dpn[i]=pre[i];
    }
    for (int h=2; h<=k; h++)
    {
        for (int i=0; i<=n; i++)
        {
            dpo[i]=dpn[i];
            dpn[i]=pre[i];
 
            x[i]=dpo[i]+rev[i]*sum[i]-pre[i];
            y[i]=sum[i];
        }
        sta.clear();
        for (int i=1; i<=n; i++)
        {
            while(sta.size()>1 && vec(sta[sta.size()-2], sta[sta.size()-1], i-1)>=0)
            sta.pop_back();
            sta.push_back(i-1);
            tsa=0;
            tsb=sta.size()-1;
            while(tsa<tsb)
            {
                tss=(tsa+tsb)>>1;
                if (1*x[sta[tss]]-rev[i]*y[sta[tss]]<1*x[sta[tss+1]]-rev[i]*y[sta[tss+1]])
                tsb=tss;
                else
                tsa=tss+1;
            }
            dpn[i]+=1*x[sta[tsa]]-rev[i]*y[sta[tsa]];
        }
    }
    printf("%.10lf\n", dpn[n]);
    return 0;
}
 
