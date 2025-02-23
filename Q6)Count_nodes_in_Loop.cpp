class Solution {
  public:
    int countNodesinLoop(Node *head) {
        if (head == nullptr || head->next == nullptr) {
            return 0; 
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {  
                
                int cnt = 1;
                Node* current = slow->next;
                
                while (current != slow) {
                    cnt++;
                    current = current->next;
                }
                
                return cnt;  
            }
        }
        
        return 0;  
    }
};
