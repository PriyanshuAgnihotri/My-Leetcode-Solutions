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
ListNode* removeNodes(ListNode* head) {
    if(head==NULL or head->next==NULL){
        return head;
    }
    ListNode* p=removeNodes(head->next);
    head->next=p;
    if(head->val<head->next->val){
        return head->next;
    }
    return head;
   }
};