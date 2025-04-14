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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
        ListNode* tmp = head;
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* tmp1 = h;
        int dem = 0;
        while(tmp !=NULL){
            if(dem%2==0){
                ListNode* tmp2 = tmp->next;
                if(tmp2 != NULL){
                    tmp->next = tmp2->next;
                    tmp2->next = tmp;
                    h->next = tmp2;
                    h = tmp2;
                }
                dem++;
            } else {
                h = tmp;
                tmp = tmp->next;
                dem++;
            }
        }
        return tmp1->next;
    }
};