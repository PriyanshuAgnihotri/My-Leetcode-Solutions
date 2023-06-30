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
        struct ListNode *p, *q;
        p = q = head;
        while(q->next){
            p = p->next;
            if(q->next->next) q = q->next->next;
            else q = q->next;
        }
        return p;
    }
};