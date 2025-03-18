class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr){
            return nullptr;
        }
        if(headB==nullptr){
            return nullptr;
        }
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int count1=0;
        int count2=0;
        while(temp1){
            temp1=temp1->next;
            count1+=1;
        }
        while(temp2){
            temp2=temp2->next;
            count2+=1;
        }
        temp1=headA;
        temp2=headB;
        int start=0;
        if(count1>count2){
            start=count1-count2;
            for(int i=0 ; i<start ; i++){
                temp1=temp1->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;

        }
        else{
            start=count2-count1;
            for(int i=0  ;i<start ; i++){
                temp2=temp2->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp2;
        }
        return nullptr;
        

        
    }
};
