// C++ implementation to find
// minimum number of deletions
// to make a string palindromic
#include <bits/stdc++.h>
using namespace std;

// Returns the length of
// the longest palindromic
// subsequence in 'str'
int lps(string str)
{
	int n = str.size();

	// Create a table to store
	// results of subproblems
	int L[n][n];

	// Strings of length 1
	// are palindrome of length 1
	for (int i = 0; i < n; i++)
		L[i][i] = 1;

	// Build the table. Note that
	// the lower diagonal values
	// of table are useless and
	// not filled in the process.
	// c1 is length of substring
	for (int cl = 2; cl <= n; cl++)
	{
		for (int i = 0;
				i < n - cl + 1; i++)
		{
			int j = i + cl - 1;
			if (str[i] == str[j] &&
						cl == 2)
				L[i][j] = 2;
			else if (str[i] == str[j])
				L[i][j] = L[i + 1][j - 1] + 2;
			else
				L[i][j] = max(L[i][j - 1],
							L[i + 1][j]);
		}
	}

	// length of longest
	// palindromic subseq
	return L[0][n - 1];
}

// function to calculate
// minimum number of deletions
int minimumNumberOfDeletions(string str)
{
	int n = str.size();

	// Find longest palindromic
	// subsequence
	int len = lps(str);

	// After removing characters
	// other than the lps, we
	// get palindrome.
	return (n - len);
}

// Driver Code
int main()
{
	string str = "geeksforgeeks";
	cout << "Minimum number of deletions = "
		<< minimumNumberOfDeletions(str);
	return 0;
}
