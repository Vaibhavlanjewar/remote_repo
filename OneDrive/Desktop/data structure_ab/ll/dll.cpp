#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node* back;

public:
node(int data1, node* next1,node* back1 ){
    data=data1;
    next=next1;
    back=back1;
}
public:
node(int data1){
  data=data1;
    next=nullptr;
    back=nullptr;
}
};

node* converarr2dll(vector<int>&arr){
    node* head=new node(arr[0]);
    node* prev=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp; 
    }
    return head;
}

void print(node*head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
// Delete head 
node* deleteHead(node* head){
    if(head==nullptr || head->next==nullptr){
        return NULL;
    }
    node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    
    delete prev;

    return head;
    }

    // delete tail 
    node* deleteTail(node* head){
        if(head==NULL || head->next==NULL){
            return NULL;
        }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* newtail=tail->back;
    newtail->next=NULL;
    tail->back=nullptr;
    delete tail;
    return head;    
    }

    node * removeKthElment(node* head,int k){
        if(head==NULL){
            return NULL;
        }
        node* temp=head;
        int cnt=0;
        while(temp !=NULL){
         cnt++;
         if(cnt==k){
            break;
         }
         temp=temp->next;
        }
         node*prev=temp->back;
         node*front=temp->next;

         if(prev==NULL && front==NULL){
            return NULL;
         }
         else if(prev==NULL){
            return deleteHead(head);
          
         }
         else if(front==NULL){
           return  deleteTail(head);

         }
       
            prev->next=front;
            front->back=prev;
            temp->next=nullptr;
            temp->back=nullptr;
            delete temp;
            return head;
        }
        
    

int main(){
    vector<int>arr={1,3,5,7};
    node *head = converarr2dll(arr); // 6/01/23
   // head= deleteHead(head);
 //   print(head);

  //  head= deleteTail(head);
  
    head=removeKthElment(head,4);
    print(head);
    return 0;
}