// 51. N-Queens
// Link : https://leetcode.com/problems/n-queens/

class NQueens {
    List<List<String>> result = new ArrayList<List<String>>();
    
    void backtrack(int[][] matrix, int c, int n) {
        if(c == n) {
            buildString(matrix);
            return;
        }        
        for(int r = 0; r < n; r++) {
            if(isValid(matrix, r, c, n)) {                
                matrix[r][c] = 1;
                backtrack(matrix, c + 1, n);
                matrix[r][c] = 0;
            }
        }
    }
    
    boolean isValid(int[][] matrix, int r, int c, int n) {
        // check left        
        for(int i = c - 1; i >= 0; i--) {
            if(matrix[r][i] == 1) {                
                return false;
            }
        }
        
        // check up left
        for(int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if(matrix[i][j] == 1) {                
                return false;
            }
        }
                
        
        // check down left
        
        for(int i = r + 1, j = c- 1; i < n && j >= 0; i++, j--) {
            if(matrix[i][j] == 1) {                
                return false;
            }
        }
        return true;
    }
    
    void buildString(int[][] matrix) {
        List<String> list = new ArrayList<>();        
        for(int[] r : matrix) {
            StringBuilder sb = new StringBuilder();
            for(int c : r) {
                if(c == 0)
                    sb.append(".");
                else {
                    sb.append("Q");
                }
            }
            list.add(sb.toString());
        }
        result.add(list);        
    }
    
    public List<List<String>> solveNQueens(int n) {
        int[][] matrix = new int[n][n];
        backtrack(matrix, 0, n);
        return result;
    }
}