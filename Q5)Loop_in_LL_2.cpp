/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return nullptr;
        }
       ListNode* temp=head;
       ListNode* slow=head;
       ListNode* fast=head;

       while(fast!=nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            temp=temp->next;
        }
        if(temp==slow || temp==fast){
            return temp;
        }
       } 
       return nullptr;
        
    }
};
