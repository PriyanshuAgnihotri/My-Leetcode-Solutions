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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
        return l1;
        else if(l1 == NULL)
        return l2;
        else if(l2 == NULL)
        return l1;
        int s =l1-> val  + l2->val;
        ListNode* ans = new ListNode(s%10);
        ans-> next = addTwoNumbers(l1->next , l2->next);
        if(s >=10){
            ans->next = addTwoNumbers(ans->next , new ListNode(1));

        }
        return ans;

    }
};