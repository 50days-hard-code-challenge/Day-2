// PREORDER TRAVERSAL OF BINARY TREE USING STACK BY ITERATION
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
       List<Integer> preorder=new ArrayList<Integer>();
       if(root==null)
       {
           return preorder;
       }
       Stack <TreeNode> st=new Stack<TreeNode>();
       st.push(root);
       while(!st.isEmpty())
       {
           root=st.pop();
           preorder.add(root.val);
           if(root.right!=null)
           {
               st.push(root.right);
           }
           if(root.left!=null)
           {
                st.push(root.left);
           }
       }
       return preorder;
        
    }
}
// PREORDER TRAVERSAL OF BINARY TREE USING RECURSION
class Solution {
    public List<Integer> preorder(TreeNode root , List<Integer> list)
    {
       if(root==null)
      {
        return list;
      }
      list.add(root.val);
      preorder(root.left,list);
      preorder(root.right,list);
      return list;

    }
    public List<Integer> preorderTraversal(TreeNode root) {
      ArrayList<Integer> ans=new ArrayList<>();
      preorder(root , ans);
      return ans;
    
        
    }
}
