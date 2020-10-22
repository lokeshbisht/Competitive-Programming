// 101. Symmetric Tree
// Link : https://leetcode.com/problems/symmetric-tree/

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
    
    // Iterative
    // public boolean isSymmetric(TreeNode root) {
    //     if(root == null) {
    //         return true;
    //     }
    //     Queue<TreeNode> q = new LinkedList<>();
    //     q.add(root.left);
    //     q.add(root.right);
    //     while(!q.isEmpty()) {
    //         TreeNode tmpLeft = q.poll();
    //         TreeNode tmpRight = q.poll();
    //         if(tmpLeft == null && tmpRight == null) {
    //             continue;
    //         }
    //         if(tmpLeft == null || tmpRight == null) {
    //             return false;
    //         }
    //         if(tmpLeft.val != tmpRight.val) {
    //             return false;
    //         }
    //         q.add(tmpLeft.left);
    //         q.add(tmpRight.right);
    //         q.add(tmpLeft.right);
    //         q.add(tmpRight.left);
    //     }
    //     return true;
    // }


    boolean isSymmetric(TreeNode left, TreeNode right) {
        if(left == null && right == null) {
            return true;
        }
        if(left == null || right == null) {
            return false;
        }
        if(left.val != right.val) {
            return false;
        }
        return isSymmetric(left.right, right.left) && isSymmetric(left.left, right.right);
    }
    
    
    public boolean isSymmetric(TreeNode root) {
        if(root == null) {
            return true;
        }
        return isSymmetric(root.left, root.right);
    }
}