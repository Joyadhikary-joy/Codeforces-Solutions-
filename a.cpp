#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  char str[1000], substring[100];
  const int mx = 1000;
  cout << "Type @ to terminate the input.....\n\n";
  cin.get(str, 1000, '@');
  int start = 0, end = 0, idx = 0;
  int len = strlen(str);
  while (end < len)
  {
    if (str[end] == ' ' or str[end] == '\n')
    {
      for (int i = start; i < end; i++)
        substring[idx++] = str[i];
      substring[end] = '\0';
      for (int j = 0; j < idx; j++)
        cout << substring[j];
      cout << "\n";
      end++;
      idx = 0;
      start = end;
    }
    else
      end++;
  }
  return 0;
  
}