// 110. Balanced Binary Tree
// Link : https://leetcode.com/problems/balanced-binary-tree/

// Idea : Get depth of left and right subtrees using dfs. If the difference is greater than 1, 
//          make result value false.

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    boolean result = true;
    
    int dfs(TreeNode root, int level) {
        if(root == null) {
            return 0;
        }
        int leftH = dfs(root.left, level + 1);
        int rightH = dfs(root.right, level + 1);
        if(Math.abs(leftH - rightH) > 1) {
            result = false;
        }
        return Math.max(leftH, rightH) + 1;
    }
    
    public boolean isBalanced(TreeNode root) {
        dfs(root, 0);
        return result;
    }
}