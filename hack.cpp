#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        int zuo = 0, you = 0, wen = 0;
        char temp[505];
        scanf("%s", temp);
        int h = strlen(temp);
        if(h % 2 == 1)
        {
            printf("NO\n");
        }
        else
        {
            int l = -1, r = -1;
            for(int i = 0; i < h; ++i)
            {
                if(temp[i] == '(' || temp[i] == ')')
                {
                    if(l == -1)
                        l = i;
                    else if(r == -1)
                        r = i;
                }
            }
            //cout << l << endl;
            //cout << r << endl;
            if(temp[l] == '(')
            {
                printf("YES\n");
            }
            else if(temp[l] == ')')
            {
                if(l == 0 || r == h - 1)
                {
                    printf("NO\n");
                }
                else
                    printf("YES\n");
            }
        }
    }
}