#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;

	int rowStart = 0;
	int colStart = 0;
	int rows = matrix.size();
	int cols = matrix[0].size();

	while (true) {

		if (rowStart >= rows or colStart >= cols) {
			break;
		}
    	for (int i = rowStart; i < cols; i++) {
			res.push_back(matrix[rowStart][i]);
		}
    	for (int i = rowStart + 1; i < rows; i++) {
       		res.push_back(matrix[i][cols - 1]);
		}
	    if ((rows - 1) != rowStart) {
			for (int i = cols - 2; i >= colStart; i--) {
				res.push_back(matrix[rows - 1][i]);
			}
		}
		if ((cols - 1) != colStart) {
			for (int i = rows - 2; i > rowStart; i--) {
				res.push_back(matrix[i][colStart]);
			}
		}
		rowStart++;
		colStart++;
		rows--;
		cols--;
	}
    return res;
}

int main() {
	
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix;
	
	for (int i = 0; i < n; i++) {
		vector<int> arr(m);
		for (int j = 0; j < m; j++) {
			cin>>arr[j];
		}
		matrix.push_back(arr);
	} 
	
	vector<int> result = spiralOrder(matrix);
	
	for (int i = 0; i < result.size(); i++) {
		cout<<result[i]<<" ";
	}
	return 0;
}

