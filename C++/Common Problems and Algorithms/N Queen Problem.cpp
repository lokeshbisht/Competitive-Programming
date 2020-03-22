#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

//total solutions
static int num = 0;

//dimensions of board
const static int n = 8;

void printBoard(int board[n][n]) {
		
	cout<<"Solution Number : "<<num<<"\n\n";
	loop (i, n) {
		loop (j, n) {
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	} 
	cout<<endl;
}

bool isValid(int board[n][n], int row, int col) {
	
	//Check row on left
	loop (i, col) {
		if (board[row][i]) {
			return false;
		}
	}
	
	//Check upper diagonal on left
	for (int i = row, j = col; i >= 0 &&j >= 0; i--, j--) {
		if (board[i][j]) {
			return false;
		}
	}
	
	//Check lower diagonal on left
	for (int i = row, j = col; i < n &&j >= 0; i++, j--) {
		if (board[i][j]) {
			return false;
		}
	}
	
	//Can place queen at (row, col)
	return true; 
}
 
bool findAndPrintSolutions(int board[n][n], int col) {
	
	//All queens are placed
	if (col == n) {
		num++;
		printBoard(board);
		return true;
	} 

	bool res = false; 
	for (int i = 0; i < n; i++) {
		if (isValid(board, i, col)) {
			
			//place queen at (i, col)
			board[i][col] = 1; 

			res = findAndPrintSolutions(board, col + 1) || res; 
			
			//Invalid placement, remove queen and continue
			board[i][col] = 0;
		} 
	}
	
	return res; 
} 

void findSolutions() {
	
	int board[n][n];
	
	memset(board, 0, sizeof(board)); 
	
	findAndPrintSolutions(board, 0);
	
	cout<<"Total solutions with n = "<<n<<" are = "<<num;
} 

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	findSolutions();
}
