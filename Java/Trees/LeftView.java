// Link : https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
// Check right view explanation.


/* A Binary Tree node
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}*/


class Tree
{
    ArrayList<Integer> result = new ArrayList<>();
    
    void dfs(Node root, int level) {
        if(root == null) {
            return;
        }
        if(result.size() == level) {
            result.add(root.data);
        }
        dfs(root.left, level + 1);
        dfs(root.right, level + 1);
    }
    
    ArrayList<Integer> leftView(Node root)
    {
      dfs(root, 0);
      return result;
    }
}