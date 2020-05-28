#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int n, m;
int arr[N][N];
int dp[N][N] = {0};
int vis[N][N] = {0};

int solve(int i, int j) {
	if (i == n - 1 && j == m - 1) {
		return arr[i][j];
	}
	
	if (vis[i][j]) {
		return dp[i][j];
	}
	
	int &ans = dp[i][j];
	vis[i][j] = 1;
	
	if (i != n - 1 && j != m - 1) {
		ans = arr[i][j] + max(solve(i + 1,j), solve(i, j + 1));
	} else if (i == n - 1) {
		ans = arr[i][j] + solve(i, j + 1);
	} else {
		ans = arr[i][j] + solve(i + 1, j);
	}
	
	return ans;
}

int main() {
	
	cin>>n>>m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>>arr[i][j];
		}
	}
	
	cout<<solve(0, 0);
}
