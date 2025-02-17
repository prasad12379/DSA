class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==nullptr){
            return head;
        }
       DLLNode* init=head;
       DLLNode* end=head;
       int cnt=1;
       while(end->next!=0){
           end=end->next;
           cnt+=1;
           
       }
       
       for(int i=0 ; i<(cnt/2) ; i++){
           swap(init->data , end->data);
           init=init->next;
           end=end->prev;
       }
       return head;
    }
};
