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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return nullptr;
        }
        int length=0;
        ListNode* temp=head;
        ListNode* dummy2=head;
        while(temp){
            temp=temp->next;
            length+=1;
        }
        temp=head;
        int count=length-n;
        if(count==0){
            head=head->next;
            delete dummy2;
            return head;
        }
        for(int i=1 ; i<count ; i++){
            temp=temp->next;
        }
        ListNode* dummy=temp->next;
        temp->next=dummy->next;
        delete dummy;
        return head;
        
    }
};
