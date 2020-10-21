// 543. Diameter of Binary Tree
// Link : https://leetcode.com/problems/diameter-of-binary-tree/
// Idea : Our largest path may or maynot pass through the root. Therefore we maitain a variable max to
//      to store the maximum value of path. We will pass the larger of left and right subtree and add
//      1 for the current node to the parent node.
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
    int max = 0;
    
    int dfs(TreeNode root) {
        if(root == null) {
            return 0;
        }
        int leftH = dfs(root.left);
        int rightH = dfs(root.right);
        max = Math.max(max, leftH + rightH);
        return Math.max(leftH, rightH) + 1;
    }
    
    public int diameterOfBinaryTree(TreeNode root) {
        dfs(root);
        return max;        
    }
}