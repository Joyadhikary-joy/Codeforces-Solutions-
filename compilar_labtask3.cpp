#include <bits/stdc++.h>
using namespace std;

bool joy_deci(char ch)
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
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || joy_deci(str[0]) == true)
        return (false);
    return (true);
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

bool isInteger(char *str)
{
    int i, len = strlen(str);

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' &&
                str[i] != '8' && str[i] != '9' ||
            (str[i] == '-' && i > 0))
            return (false);
    }
    return (true);
}
bool INT(char *str)
{
    int len = strlen(str);

    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.' and str[i + 1] == '0')
            return true;
    }
    return false;
}
bool FLOAT(char *str)
{
    int len = strlen(str);

    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.' and str[i + 1] != '0')
            return true;
    }
    return false;
}
bool Float_num(char *str)
{
    int i, len = strlen(str);
    bool hasDecimal = false;

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' &&
                str[i] != '8' && str[i] != '9' && str[i] != '.' ||
            (str[i] == '-' && i > 0))
            return (false);
        if (str[i] == '.' & str[i + 1] != '0')
            hasDecimal = true;
    }
    return (hasDecimal);
}

char *subString(char *str, int left, int right)
{
    int i;
    char *subStr = (char *)malloc(
        sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}
bool separator(char ch)
{
    if (ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}')
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
        if (joy_deci(str[right]) == false)
            right++;

        if (joy_deci(str[right]) == true && left == right)
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
        else if (joy_deci(str[right]) == true && left != right || (right == len && left != right))
        {
            char *subStr = subString(str, left, right - 1);

            if (joy_keyword(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A KEYWORD\n", subStr);
            }
            else if (INT(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> AN INTEGER\n", subStr);
            }       

            else if (isInteger(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> AN INTEGER\n", subStr);
            }

            else if (FLOAT(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A FLOAT NUMBER\n", subStr);
            }

            else if (Float_num(subStr) == true)
            {
                cout << endl;
                printf("'%s' ==>> A FLOAT NUMBER\n", subStr);
            }

            else if (joy_validIdentifier(subStr) == true && joy_deci(str[right - 1]) == false)
            {
                cout << endl;
                printf("'%s' ==>> A VALID IDENTIFIER\n", subStr);
            }

            else if (joy_validIdentifier(subStr) == false && joy_deci(str[right - 1]) == false)
            {
                cout << endl;
                printf("'%s' ==>> NOT A VALID IDENTIFIER\n", subStr);
            }
            left = right;
        }
    }
    return (0);
}