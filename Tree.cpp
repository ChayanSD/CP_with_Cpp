package Tree.BinaryTree;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class CreateTRee {
 public static class Node{
     //Every nodes properties.
     int data;
      public Node left;  //Public because i am access it in other package.
        public Node right;

        public Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }
    static class BinaryTree{
     //For traversing the entire tree we need index.
     //Initially index -1; means null
        static int index = -1;
     public static Node buildTree(int [] nodes){
         index++;        //When the function call increment the index -1 to 0; 0 represent our root.
         if(nodes[index]==-1){
             return null;
         }
         //for other nodes creating a new node.
         Node newNode = new Node(nodes[index]);
            //for left nodes
         newNode.left=buildTree(nodes);
            //for right nodes
         newNode.right=buildTree(nodes);

    return newNode;
     }
    }
    public static void preOrderTraversal(Node root){
     //In preorder traversal 1.print root then left subtree then right subtree.

       //base case
        if(root == null){
            return;
        }
        System.out.print(root.data+" ");
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);
    }
    public static void inorderTraversal(Node root){
     //Step: print left nodes ->root->right nodes
     if(root == null){
         return;
     }
     inorderTraversal(root.left);
        System.out.print(root.data+" ");
        inorderTraversal(root.right);
    }

    public static void postOrderTraversal(Node root){
        //Step: print left nodes -> right nodes -> root
        if(root == null){
            return;
        }
        inorderTraversal(root.left);
        inorderTraversal(root.right);
        System.out.print(root.data+" ");
    }
    public static void levelOrderTraversal(Node root){
                if(root == null){
                    return;
                }
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);
        queue.add(null);
        while(!queue.isEmpty()){
            Node currentNode = queue.remove();
            if(currentNode == null){
                System.out.println();
                if(queue.isEmpty()){
                    break;
                }else{
                    queue.add(null);
                }
            }else{
                System.out.print(currentNode.data +" ");
                if(currentNode.left != null){
                    queue.add(currentNode.left);
                }
                if(currentNode.right != null){
                    queue.add(currentNode.right);
                }

            }
        }

    }
   //Question : sum of all nodes data.
    public static int sumOfNodes(Node root){
     if(root== null){
         return 0;
     }
     int leftSum= sumOfNodes(root.left);
     int rightSum = sumOfNodes(root.right);
     return leftSum + rightSum + root.data;
    }
    //Question : Height of a tree
    public static int heightOfTree(Node root){
        if(root== null){
            return 0;
        }
        int leftHeight= heightOfTree(root.left);
        int rightHeight = heightOfTree(root.right);
        return Math.max(leftHeight,rightHeight) + 1; //+1 for root also we have to count.
    }

    public static void main(String[] args) {
      int [] nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        //Creating the binary tree objects
        BinaryTree tree = new BinaryTree();
       Node root = tree.buildTree(nodes);
        System.out.println(root.data);
        preOrderTraversal(root);
        System.out.println();
        inorderTraversal(root);
        System.out.println();
        postOrderTraversal(root);
        System.out.println();
        levelOrderTraversal(root);
        System.out.println();
        System.out.println(sumOfNodes(root));
        System.out.println(heightOfTree(root));
    }


}
