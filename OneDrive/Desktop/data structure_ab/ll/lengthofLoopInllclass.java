 class Node {
     public int data;
     public Node next;

     Node()
     {
         this.data = 0;
         this.next = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
     }

     Node(int data, Node next)
     {
         this.data = data;
         this.next = next;
     }
 };

 
//https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?leftPanelTabValue=SUBMISSION
public class lengthOfLoopclass
{
    private static int findlength(Node slow,Node fast){
        int cnt=0;
        do{
            cnt++;
            fast=fast.next;
        }while(slow!=fast);

        return cnt; 
    }
    public static int lengthOfLoop(Node head) {
        // Write your code here
        Node fast=head;
        Node slow=head;

        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast){
                return findlength(slow,fast);
            }
        }
        return 0;
    }
}