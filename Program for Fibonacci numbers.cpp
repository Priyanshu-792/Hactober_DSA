Program to print first 20 Fibonacci Numbers

//code

#include <bits/stdc++.h>
using namespace std;

void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	cout << f1 << " ";
	for (i = 1; i < n; i++) {
		cout << f2 << " ";
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main()
{
	printFibonacciNumbers(20);
	return 0;
}
