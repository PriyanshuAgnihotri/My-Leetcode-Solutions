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
    ListNode* partition(ListNode* head, int x) {
      ListNode* copyH = new ListNode();   
        ListNode* copy = copyH; 
        ListNode* prev = NULL, *curr = head; 
        ListNode* secondPart = new ListNode();
        bool secondPartExists = false;
        while(curr != NULL){
            if(curr->val >= x){
                if(prev == NULL){
                    secondPartExists = true; 
                    secondPart = curr; 
                }
                prev = curr;
                curr = curr->next;
            }
            else{
                copy->next = curr;
                copy = copy->next;
                if(prev != NULL)prev->next = curr->next;
                curr = curr->next;
                copy->next = NULL;
            }
        }

        if(secondPartExists) copy->next = secondPart;
        return copyH->next;    
        
    }
};