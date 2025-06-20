/*
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}

*/
class Solution {
    public boolean isSymmetric(Node root) {
        
        if (root == null) return true;
        
        
        return findSym(root.left, root.right);
    }

    private boolean findSym(Node p, Node q) {
        
        if (p == null || q == null) return p == q;

        
        return (p.data == q.data)
            && findSym(p.left, q.right)
            && findSym(p.right, q.left);
    }
}

 