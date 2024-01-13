

 // https://www.codingninjas.com/studio/problems/add-two-numbers_1170520?leftPanelTabValue=SUBMISSION
 class Node {
  public:
      int data;
       Node *next;
      Node() {
           this->data = 0;
           this->next = nullptr;
      }
       Node(int data) {
           this->data = data;
           this->next = nullptr;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
  };


Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* dummynode = new Node(1);
    Node* curr = dummynode;   
    Node* t1 = num1;
    Node* t2 = num2;
    int carry = 0;
    while(t1 != nullptr || t2 != nullptr){
        int sum = carry;
        if(t1) sum +=t1->data;
        if(t2) sum +=t2->data;

        Node* newnode = new Node(sum % 10);
        carry= sum / 10;
        curr->next = newnode;
        curr=curr->next;
        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;

    }

    if(carry){
       Node* newnode= new Node(carry);
       curr->next = newnode;
    }
    return dummynode->next;
}
