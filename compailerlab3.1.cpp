/*
                            HAR HAR MAHADEV
                             _SPIDER_2.0
                                                            */

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
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define loop(i, a, b) for (int i = a; i < b; ++i)
#define for9(i, n) for (int i = n - 1; i >= 0; --i)
//const ll N=1e5+3;


bool flag = 0;
bool joy_delimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == '\n')
        return (true);
    return (false);
}

bool joy_arithmetic_opare(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/')
        return (true);
    return (false);
}

bool joy_relational_opare(char ch)
{
    if (ch == '>' || ch == '<' || ch == '=')
        return (true);
    return (false);
}

bool joy_validIdentifier(char *str)
{
    int count = 0;
    int n = strlen(str);
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return false;
    for1(i, n - 1)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }
    return true;
}

bool joy_keyword(char *str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
        !strcmp(str, "while") || !strcmp(str, "do") ||
        !strcmp(str, "break") ||
        !strcmp(str, "continue") || !strcmp(str, "int") || !strcmp(str, "double") || !strcmp(str, "float") || !strcmp(str, "return") ||
        !strcmp(str, "char") || !strcmp(str, "case") || !strcmp(str, "char") || !strcmp(str, "sizeof") || !strcmp(str, "long") || !strcmp(str, "short") ||
        !strcmp(str, "typedef") || !strcmp(str, "switch") || !strcmp(str, "unsigned") || !strcmp(str, "void") || !strcmp(str, "static") ||
        !strcmp(str, "struct") || !strcmp(str, "goto"))
        return (true);
    return (false);
}

bool INT(char *str)
{
    int len = strlen(str);

    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' &&
            str[i] != '8' && str[i] != '9')
            return false;
    }
    return true;
}
bool Valid_float(char *str)
{
    int len = strlen(str);
    int count = 0;
    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.')
            count++;
    }
    if (count > 1)
    {
        return false;
    }
    else
        return true;
}

bool joy_float_number(char *str)
{
    int i, len = strlen(str), count = 0;
    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.')
            return (false);
    }
    return true;
}

char *subString(char *str, int left, int right)
{
    int i;
    char *subStr = (char *)malloc( sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}

bool separator(char ch)
{
    if (ch == ','  || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}')
        return true;
    return false;
}

int main()
{
    char str[1000];
    const int mx = 1000;
    cin.get(str, mx, '$');
    int left = 0, right = 0;
    int len = strlen(str);

    while (right <= len && left <= right)
    {
        if (joy_delimiter(str[right]) == false)
            right++;

        if (joy_delimiter(str[right]) == true && left == right)
        {
            if (joy_arithmetic_opare(str[right]) == true)
            {
                cout << endl;
                printf("'%c' ==>> AN ARETHMETIC OPERATOR\n", str[right]);
            }
            if (joy_relational_opare(str[right]) == true)
            {
                cout << endl;
                printf("'%c' ==>> RELATIONAL OPERATOR\n", str[right]);
            }
            else if (separator(str[right]) == true)
            {
                cout << endl;
                printf("'%c' ==>> A SEPARATOR\n", str[right]);
            }
            right++;
            left = right;
        }
        else if (joy_delimiter(str[right]) == true && left != right || (right == len && left != right))
        {
            char *subStr = subString(str, left, right - 1);

            if (joy_keyword(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A KEYWORD\n", subStr);
            }

            else if (Valid_float(subStr) == false)
            {
                cout << endl;
                printf("'%s' ==>> IS NOT A VALID FLOAT NUMBER \n", subStr);
            }
            else if (INT(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> AN INTEGER NUMBER \n", subStr);
            }

            else if (joy_float_number(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A VALID FLOAT NUMBER  \n", subStr);
            }

            else if (joy_validIdentifier(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A VALID IDENTIFIER\n", subStr);
            }

            else if (joy_validIdentifier(subStr) == false)
            {
                cout << endl;
                printf("'%s' ==>> NOT A VALID IDENTIFIER\n", subStr);
            }
            left = right;
        }
    }
    return (0);
}