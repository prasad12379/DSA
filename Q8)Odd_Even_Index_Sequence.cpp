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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }
        if(head->next->next==nullptr){
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* sub_head=temp2;
        ListNode* sub_tail=temp1;
        while(temp1){
            if(temp1->next==nullptr || temp1->next->next==nullptr){
                sub_tail=temp1;
                break ;
            }
            temp1->next=temp1->next->next;
            temp2->next=temp2->next->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        sub_tail->next=sub_head;
        return head;
        
    }
};
