/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         if(head==NULL)
        {
            return 0;
        }
        ListNode  *cur=head;
        int result=0;
        while(cur!=NULL)
        {
            if(cur->val==1e5+1)
            {
                result=1;
                break;
            }
            cur->val=1e5+1;
            cur=cur->next;
        }
        return result;
    }
};