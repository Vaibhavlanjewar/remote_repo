

public class BST {
    static class node{
        int d; //data
        node left;
        node right;
        node(int d)
        {
            this.d=d;

        }
    }
    public static node insert (node root,int val){
        if(root==null){
            root=new node(val);
            return root ;
        }
        if(root.d>val){
            // left subtree
            root.left=insert(root.left,val);

        }
        else{
            root.right=insert(root.right,val);
        }
        return root;

    }
    public static void inorder(node root){
        //inorder -- LVR--left subtree,root ,right subtree
        if(root==null){
            return ;
        }
        inorder(root.left);
        System.out.print(root.d+"");
        inorder(root.right);
    }

    public static void main(String []args){
        int values[]={5,1,3,4,2,7};
        int i;
        node root=null;
        for(i=0;i<values.length;i++);{
            root=insert(root,values[i]);
        }
        inorder(root);
        System.out.println();

    }
}
