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
    ListNode* mergeLists(ListNode* l1, ListNode* l2, ListNode* res){
        ListNode* p = res;
        while(l1 && l2){
            if(l1->val > l2->val){
                p->next = l2;
                l2 = l2->next; 
                p = p->next;
            } else{
                p->next = l1;
                l1 = l1->next;
                p = p->next;
            }
        }

        if(l1){
            p->next = l1;
        }
        if(l2){
            p->next = l2;
        }
        return res->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        ListNode* res = new ListNode(-10001);
        for(ListNode* l: lists){
            ListNode* p = new ListNode(0);
            res = mergeLists(res, l, p);
            delete p;

        }
        return res->next;
    }
};