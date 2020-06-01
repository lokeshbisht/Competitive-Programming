#include <bits/stdc++.h>

using namespace std;

const int N = 9;

bool isValid(int sudoku[N][N], int x, int y, int n) {
	
	for (int i = 0; i < N; i++) {
		if (sudoku[x][i] == n) {
			return false;
		}
	}
	
	for (int i = 0; i < N; i++) {
		if (sudoku[i][y] == n) {
			return false;
		}
	}
	
	int xx = (x / 3) * 3;
	int yy = (y / 3) * 3;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (sudoku[xx + i][yy + j] == n) {
				return false;
			}
		}
	}
	
	return true;
}

printSudoku(int sudoku[N][N]) {
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout<<sudoku[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool solved = false;

void solveSudoku(int sudoku[N][N]) {
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (sudoku[i][j] == 0) {
				for (int k = 1; k <= 9; k++) {
					if (isValid(sudoku, i, j, k)) {
						sudoku[i][j] = k;
						solveSudoku(sudoku);
						if (solved) {
							return;
						}
						sudoku[i][j] = 0;
					}
				}
				return;
			}
		}
	}
	
	solved = true;
}

int main() {
	
	int sudoku[N][N] = {{5,3,0,0,7,0,0,0,0},
						{6,0,0,1,9,5,0,0,0},
						{0,9,8,0,0,0,0,6,0},
						{8,0,0,0,6,0,0,0,3},
						{4,0,0,8,0,3,0,0,1},
						{7,0,0,0,2,0,0,0,6},
						{0,6,0,0,0,0,2,8,0},
						{0,0,0,4,1,9,0,0,5},
						{0,0,0,0,8,0,0,7,9}};
					
	solveSudoku(sudoku);
	
	printSudoku(sudoku);
}
