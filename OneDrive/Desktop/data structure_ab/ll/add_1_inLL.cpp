
 // Definition of linked list:
 //https://www.codingninjas.com/studio/problems/add-one-to-a-number-represented-as-linked-list_920557?leftPanelTabValue=SUBMISSION
  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
  };
 
int getCarry(Node* temp){
    if(temp==NULL) return 1;
    int carry=getCarry(temp->next);
    temp->data += carry;

    if(temp->data <10) return 0;
    temp->data=0;
    return 1;
}

Node *addOne(Node *head)
{
    int carry=getCarry(head);
    if(carry==1){
        Node* newnode=new Node(carry);
        newnode->next=head;
        head=newnode;

    }
    return head;
}
