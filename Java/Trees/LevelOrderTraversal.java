// 102. Binary Tree Level Order Traversal
// Link : https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> list = new ArrayList<>();
        if(root == null) {
            return list;
        }
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        q.add(null); // null is inserted to mark the end of level
        list.add(new ArrayList<>());
        while(!q.isEmpty()) {
            TreeNode curr = q.poll();            
            list.get(list.size() - 1).add(curr.val);
            if(curr.left != null) {
                q.add(curr.left);
            }
            if(curr.right != null) {
                q.add(curr.right);
            }
            if(q.peek() == null) {
                q.poll();
                if(q.size() != 0) { // if the traversal is complete null is not inserted
                    list.add(new ArrayList<>());                
                    q.add(null);   
                }                
            }                        
        }
        return list;
    }
}