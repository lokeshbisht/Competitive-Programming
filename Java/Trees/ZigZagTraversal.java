// 103. Binary Tree Zigzag Level Order Traversal
// Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> list = new ArrayList<>();
        if(root == null) {
            return list;
        }
        list.add(new LinkedList<>());
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()) {
            TreeNode curr = q.poll();
            if(list.size() % 2 == 1) {
                list.get(list.size() - 1).add(curr.val);
            }
            else {
                list.get(list.size() - 1).add(0, curr.val);
            }
            if(curr.left != null) {
                q.add(curr.left);
            }
            if(curr.right != null) {
                q.add(curr.right);
            }
            if(q.peek() == null) {
                q.poll();
                if(!q.isEmpty()) {
                    q.add(null);
                    list.add(new LinkedList<>());   
                }                                    
            }
        }
        return list;
    }
}