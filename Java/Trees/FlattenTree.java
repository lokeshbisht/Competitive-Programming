// 114. Flatten Binary Tree to Linked List
// Link : https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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

    public void flatten(TreeNode root) {
        if(root == null) {
            return;
        }
        flatten(root.left);
        flatten(root.right);
        TreeNode curr = root.left;
        while(curr != null && curr.right != null) {
            curr = curr.right;
        }
        if(curr != null) {
            curr.right = root.right;
            root.right = root.left;
            root.left = null;
        }
    }
}