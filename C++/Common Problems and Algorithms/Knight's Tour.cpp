#include <bits/stdc++.h>

#define loop(i, n) for (int i = 0; i < n; i++)

using namespace std;

//size of board
const int n = 8;

int moveX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
int moveY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 

//check if move is valid
int isValid(int x, int y, int board[n][n]) {
	
	return (x >= 0
			&& x < n
			&& y >= 0
			&& y < n
			&& board[x][y] == -1);
	
}

int solveKnightsTourRecursionUtil(int x, int y, int moves, int board[8][8]) {
		
	if (moves == n*n) {
		return 1;
	}
	
	int k, nextX, nextY;
	
	loop (k, n) {
		nextX = x + moveX[k];
		nextY = y + moveY[k];
		
		if (isValid(nextX, nextY, board)) {
			board[nextX][nextY] = moves;
			
			if (solveKnightsTourRecursionUtil(nextX, nextY, moves + 1, board) == 1) {
				return 1;
			} else {
				board[nextX][nextY] = -1;	
			}
		}
	}
	return 0;
}

void solveKnightsTourRecursion(int x, int y) {
	
	int board[n][n];
	
	memset(board, -1, sizeof(board));
	
	board[x][y] = 0;
	
	if (solveKnightsTourRecursionUtil(x, y, 1, board) == 0) {
		cout<<"No solution exist.";
	} else {
		loop (i, n) {
			loop (j, n) {
				cout<<board[i][j]<<" ";			
			}
			cout<<endl;
		}
	}
}

//finds degree of square
int getDegree(int x, int y, int board[n][n]) { 
    int count = 0;
    loop (i, n) {
        if (isValid(x + moveX[i], y + moveY[i], board)) {
            count++; 
        }
    }
    return count; 
} 

bool nextMove(int *x, int *y, int board[n][n]) {
    
	int minDegreeIndex = -1;
	int c;
	int minDegree = INT_MAX;
	int nextX;
	int nextY; 
  
    int start = rand() % n; 
    loop (count, n) {
        int i = (start + count) % n; 
        nextX = *x + moveX[i]; 
        nextY = *y + moveY[i]; 
        
        if ((isValid(nextX, nextY, board)) 
				&& (c = getDegree(nextX, nextY, board)) < minDegree) {
            minDegreeIndex = i; 
            minDegree = c; 
        } 
    } 
  
    if (minDegreeIndex == -1) {
    	return false;
	}
  
    nextX = *x + moveX[minDegreeIndex]; 
    nextY = *y + moveY[minDegreeIndex]; 
  
  	board[nextX][nextY] = board[*x][*y] + 1;
  
    *x = nextX; 
    *y = nextY; 
  
    return true; 
}

bool neighbour(int x, int y, int xx, int yy) { 
    loop (i, n) {
        if (((x+moveX[i]) == xx)&&((y + moveY[i]) == yy)) {
            return true;
        }
  	}
    return false; 
} 

bool findTour(int x, int y) { 
    
    int board[n][n];
    
    memset(board, -1, sizeof(board));
  
    board[x][y] = 1;
    
    int startX = x;
    int startY = y;
    
    loop (i, (n*n) - 1) {
        if (nextMove(&x, &y, board) == 0)  {
            return false;
        }
	}
  
    if (!neighbour(x, y, startX, startY)) 
        return false; 
  
    loop (i, n) {
    	loop (j, n) {
    		cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
    return true; 
} 

void solveKnightsTourWarnsdorffalgorithm(int x, int y) {
	while (!findTour(x, y)) {
		
	};
}
  

int main() {
	
	int x, y;
	
	//knight's initial position
	cin>>x>>y;
	
	//solveKnightsTourRecursion(x, y);
	solveKnightsTourWarnsdorffalgorithm(x, y);
}
