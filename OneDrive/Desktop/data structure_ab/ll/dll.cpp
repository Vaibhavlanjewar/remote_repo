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
        
    // void deletenode(node* temp){
    //     node* prev=temp->back;
    //     node* front=temp->next;

    //     if(front==NULL){
    //         prev->next=nullptr;
    //         temp->back=nullptr;
    //         free(temp);
    //         return ;
    //     }

    //     prev->next=front;
    //     front->back=prev;
    //     temp->next=temp->back=nullptr;
    //     free(temp);

    // }


    //-------------Insertion dll---------------
   
   node* insertb4Head(node* head,int val){
    node* newhead=new node(val,head,nullptr);
    head->back=newhead;
    return newhead;
   }

   node* insertb4tail(node* head, int val){
    if(head->next==NULL){
        return insertb4Head(head,val);

    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    node* prev=tail->back;
    node* newnode=new node(val,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
    return head;
   

   }

// ----------- Reverse DLL -----------
node* reversedll(node* head){
if(head== NULL || head->next==NULL){
    return head;
}
node* prev=NULL;
node* curr=head;
while(curr !=NULL){
    prev=curr->back;
    curr->next=prev;
    prev=curr->back;
    }
    return prev->back;
}
   node*  insertb4KthEl(node* head,int k, int val){
    if(k==1){
        return insertb4Head(head,val);
    }
    node* temp=head;
    int cnt=0;
    while(temp !=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node* prev=temp->back;
    node* newnode=new node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
   }

   void inserb4node(node* tempnd,int val){
    node* prev=tempnd->back;
    node* newnode=new node(val,tempnd,prev);
    prev->next=newnode;
    tempnd->back=newnode;

   }


int main(){
    vector<int>arr={1,3,5,7};
    node *head = converarr2dll(arr); // 6/01/23
   // head= deleteHead(head);
 //   print(head);

  //  head= deleteTail(head);
  
  // head=removeKthElment(head,4);
   // deletenode(head);

   // ------------ insertion ---------------

  // head=insertb4Head(head,10);
 
  //head=insertb4tail(head,12);
  // head=insertb4KthEl(head,2,14);
 // inserb4node(head->next,0);
 head= reversedll(head);
    print(head);
    return 0;
}