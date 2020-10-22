// 94. Binary Tree Inorder Traversal
// Link : https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

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

    // Iterative using stack
    void inorder(TreeNode root, List<Integer> list) {
        if(root == null) {
            return;
        }
        Stack<TreeNode> stack = new Stack<>();
        TreeNode curr = root;
        while(curr != null || !stack.isEmpty()) {
            while(curr != null) {
                stack.push(curr);
                curr = curr.left;
            }
            curr = stack.pop();
            list.add(curr.val);
            curr = curr.right;
        }
    }
    
    //recursive
    void inorder(TreeNode root, List<Integer> list) {
        if(root == null) {
            return;
        }
        inorder(root.left ,list);
        list.add(root.val);
        inorder(root.right, list);
    }
    
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        inorder(root, list);
        return list;
    }
}