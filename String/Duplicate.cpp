#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n)
{
	unordered_set<char>s (str, str+n-1);

	int i = 0;
	for (auto x : s)
	str[i++] = x;
	str[i] = '\0';

	return str;
}

int main()
{
char str[]= "geeksforgeeks";
int n = sizeof(str) / sizeof(str[0]);
cout << removeDuplicate(str, n);
return 0;
}
