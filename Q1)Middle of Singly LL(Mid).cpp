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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }

        float n=0;
        int cnt=1;
        ListNode* mover=head;
        while(mover){
            n+=1;
            mover=mover->next;
        }

        int a=n/2;
        float b=n/2;
        if(a==b){
            int count=1;
            ListNode* temp=head;
            while(count!=a){
                temp=temp->next;
                count+=1;
            }
            head=temp->next;
            return head;
        }

       
        int count=1;
        ListNode* temp=head;
        while(count!=a){
            temp=temp->next;
            count+=1;
        }
        head=temp->next;
        return head;
        



    }
};
