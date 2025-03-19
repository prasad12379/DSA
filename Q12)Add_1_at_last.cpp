class Solution {
  public:
  
  Node* reverse(Node* head){
      
      Node* prev=nullptr;
      Node* nextt=head;
      Node* temp=head;
      while(temp){
    nextt=temp->next;
      temp->next=prev;
      prev=temp;
      temp=nextt;
      
      }
      return prev;
      
  }
    Node* addOne(Node* head) {
        Node* dummy=new Node(-1);
        Node* current=dummy;
        
        Node* new_head=reverse(head);
        
        Node* temp=new_head;
        int sum=temp->data+1;
        Node* node=new Node(sum%10);
        current->next=node;
        current=node;
        int carry=sum/10;
         temp=temp->next;
        while(temp){
            sum=temp->data+carry;
            Node* nodee=new Node(sum%10);
            carry=sum/10;
            current->next=nodee;
            current=nodee;
            temp=temp->next;
        }
        if(carry){
            Node* nodeee=new Node(carry);
            current->next=nodeee;
            current=nodeee;
        }
        Node* h=dummy->next;
        delete(dummy);
        return reverse(h);
        
       
       
       
        
        
    }
};
