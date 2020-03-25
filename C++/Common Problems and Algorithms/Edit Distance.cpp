#include <bits/stdc++.h> 

using namespace std; 

int min(int x, int y, int z) { 
	return min(min(x, y), z); 
} 

int editDistanceRecursive(string str1, string str2, int m, int n) {
	
	if (m == 0) 
		return n; 

	if (n == 0) 
		return m; 

	if (str1[m - 1] == str2[n - 1]) 
		return editDistanceRecursive(str1, str2, m - 1, n - 1); 

	return 1 + min(editDistanceRecursive(str1, str2, m, n - 1), // Insert 
				editDistanceRecursive(str1, str2, m - 1, n), // Remove 
				editDistanceRecursive(str1, str2, m - 1, n - 1) // Replace 
				); 
} 

int editDistanceDp(string str1, string str2, int m, int n) 
{
	int dp[m + 1][n + 1]; 

	for (int i = 0; i <= m; i++) { 
		for (int j = 0; j <= n; j++) { 
			if (i == 0) {
				dp[i][j] = j;
			} else if (j == 0) {
				dp[i][j] = i;
			} else if (str1[i - 1] == str2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1]; 
			} else {
				dp[i][j] = 1 + min(dp[i][j - 1], // Insert 
								dp[i - 1][j], // Remove 
								dp[i - 1][j - 1]); // Replace 
			}					
		} 
	} 
	return dp[m][n]; 
}

int main() { 
	
	string s1;
	string s2;
	
	cin>>s1>>s2;

	//cout<<editDistanceRecursive(s1, s2, s1.length(), s2.length()); 
	
	cout<<editDistanceDp(s1, s2, s1.length(), s2.length()); 

	return 0; 
} 

