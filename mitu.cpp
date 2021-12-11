#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    string  strmain,comment;
    const int mx=1000;
    cin.get(str,mx,'@');
    int n = strlen(str);
    bool s_line = 0;
    bool m_line = 0;
    for(int i=0; i<n; i++)
    {
        if (str[i] == '/' && str[i + 1] == '/')
            s_line = 1;
        else if (str[i] == '/' && str[i + 1] == '*')
            m_line = 1;
        else if (s_line == 1 && str[i] == '\n')
            s_line = 0;
        else if (m_line == 1 && str[i] == '*' && str[i + 1] == '/')
        {
            m_line = 0;
            i++;
        }
        else if (m_line || s_line)
        {
            if (str[i] == '/' or str[i]=='*')
                continue;
            else
                comment+=str[i];
        }
        else
            strmain += str[i];
    }

    cout << "After removing of comments program will look like this ==>";
    cout << strmain;
    cout << "So the comments which has been removed ==>>";
    cout << comment<<" " ;
    return 0;
}