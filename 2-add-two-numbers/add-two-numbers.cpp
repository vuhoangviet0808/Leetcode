class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int nho = 0; 
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy; 
        while (l1 != NULL || l2 != NULL || nho != 0) {
            int sum = nho;  
   
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;  
            }

            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next; 
            }

            nho = sum / 10;  
            current->next = new ListNode(sum % 10); 
            current = current->next;  
        }

        return dummy->next;  
    }
};