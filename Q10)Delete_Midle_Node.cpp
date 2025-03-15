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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count+=1;
        }
        int mid=count/2;
        temp=head;
        ListNode* prev=head;
        for(int i=0 ; i<mid ; i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
        return head;

        
    }
};
