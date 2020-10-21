// 199. Binary Tree Right Side View
// Link : https://leetcode.com/problems/binary-tree-right-side-view/
// Idea is to traverse right subtree first and then the left subtree. If a level is visited for the first time
// add the current node value to the result array.


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
    List<Integer> result = new ArrayList<>();
    
    void dfs(TreeNode root, int level) {
        if(root == null) {
            return;
        }
        if(level == result.size()) {
            result.add(root.val);
        }        
        dfs(root.right, level + 1);
        dfs(root.left, level + 1);
    }
    
    public List<Integer> rightSideView(TreeNode root) {        
        dfs(root, 0);
        return result;
    }
}