// 37. Sudoku Solver
// Link : https://leetcode.com/problems/sudoku-solver/

class Sudoku {
    boolean solve(char[][] board, int n) {
        int i = 0, j = 0;
        int flag = 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {                
                if(board[i][j] == '.') {                    
                    flag = 1;
                    break;
                }                
            }
            if(flag == 1) {
                break;
            }
        }        
        if(i == n && j == n) {
            return true;
        }
        
        for(int k = 1; k <= n; k++) {
            if(isValid(board, i, j, n, k)) {
                board[i][j] = (char)(k + '0');                
                if(solve(board, n)){
                    return true;
                }
                board[i][j] = '.';
            }
        }
        return false;
    }
    
    boolean isValid(char[][] board, int r, int c, int n, int k) {
        for(int i = 0; i < n; i++) {            
            if(board[i][c] == (char)(k + '0') || board[r][i] == (char)(k + '0')) {
                return false;
            }
        }
        
        int sqrt = (int)Math.sqrt(n);
        int rq = r - r % sqrt;
        int cq = c - c % sqrt;
        for(int i = 0; i < sqrt; i++) {
            for(int j = 0; j < sqrt; j++) {
                if(board[rq + i][cq + j] == (char)(k + '0')) {
                    return false;
                }
            }
        }
        return true;
    }
    
    public void solveSudoku(char[][] board) {
        int n = board.length;
        solve(board, n);
    }
}