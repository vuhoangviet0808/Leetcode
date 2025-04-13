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
        int dem = 0;
        ListNode* tmp = head;
        while(tmp != NULL){
            dem++;
            tmp = tmp->next;
        }
        int pos = (dem - n + 1);
        if(pos == 1){
            tmp = head;
            head = head->next;
            delete tmp;
            return head;
        }
        tmp = head;
        dem = 0;
        while(tmp != NULL){
            dem++;
            if(dem == pos-1){
                ListNode* tmp1 = tmp->next;
                tmp->next = tmp1->next;
                delete tmp1;
                break;
            }
            tmp = tmp->next;
        }
        return head;
    }
};