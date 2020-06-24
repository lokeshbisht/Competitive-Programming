 #include <bits/stdc++.h>
 
using namespace std;

bool isLand(vector<string>& grid, int row, int col) {
		
	return (row >= 0) &&
			(row < grid.size()) &&
			(col >= 0) && 
			(col < grid[0].length()) &&
			(grid[row][col] == '1');
}

void visitAllLand(vector<string>& grid, int row, int col) {
    	
	int rows[] = {0, 1, 0, -1};
	int cols[] = {-1, 0, 1, 0};
	
	grid[row][col] = '0';
		
	for (int i = 0; i < 4; i++) {
			
		if (isLand(grid, row + rows[i], col + cols[i])) {
			visitAllLand(grid, row + rows[i], col + cols[i]);
		}
	}
}

int numIslands(vector<string>& grid) {
    int x = 0;

	for (int i = 0; i < grid.size(); i++) {
		
		for (int j = 0; j < grid[0].length(); j++) {
			
			if (grid[i][j] == '1') {
				
				x++;
				visitAllLand(grid, i, j);
			}
		}
	}
    return x;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> grid;
	
	for(int i = 0; i < n; i++) {
		string s;
		cin>>s;
		grid.push_back(s);
	}
	
	int result = numIslands(grid);
	cout << result;
	return 0;
}

