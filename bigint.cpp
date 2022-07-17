
#include<bits/stdc++.h>
using namespace std;

int check(string str)
{
	
	int n = str.length();
	int digitSum = 0;
	for (int i=0; i<n; i++)
		digitSum += (str[i]-'0');

	return (digitSum % 3 == 0);
}

int main()
{
	string str ;
    cin>>str;
	check(str)? cout << "Yes" : cout << "No ";
	return 0;
}
