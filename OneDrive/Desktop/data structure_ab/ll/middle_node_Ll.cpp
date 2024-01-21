/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 // https://leetcode.com/problems/middle-of-the-linked-list/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&& fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
         //  temp=temp->next;  
        } 
     return slow;    
    }
};