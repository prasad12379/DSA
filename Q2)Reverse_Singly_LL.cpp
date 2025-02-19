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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }
       ListNode* prev=nullptr;
       ListNode* nextt=head;
       ListNode* temp=head;
       while(nextt){
        nextt=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextt;   
       }
       return prev;
    }
};
