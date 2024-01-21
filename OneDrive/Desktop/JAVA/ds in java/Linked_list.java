public class Linked_list {
    /*
 (use when search ele)ARRAYLIST        LINKEDLIST  .. use add eleme

     INSERT            O(n)          <     O(1)
     SEARCH            0(1)          >     O(n)

--------------
   linked_list
   -Variable size
   -Non Contiguous memory
   -insert in o(1)
   -Search in o(n)

   operations
   --insertion / Add
   --print
   -- delete
   -- Size of linked list


   |--------------|---------------|
   | data  | next |-->Data| next- |
   
   |--------------|---------------|
     */
    Node head;

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public void addFirst(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    public void addLast(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }

    public void printList() {
        if (head == null) {
            System.out.println("Linked List is Empty");
            return;
        }
        Node currNode = head;
        while (currNode != null) {
            System.out.print(currNode.data + " --> ");
            currNode = currNode.next;
        }
        System.out.println("NULL");
    }

    public static void main(String args[]) {
        Linked_list l=new Linked_list();
        l.addFirst(1);
        l.addFirst(2);
        l.printList();
    }

}
