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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode* temp;
        temp = head;
        int node=0;
        while(temp!=0){
            node++;
            temp=temp->next;
        }
        ListNode *slow , *fast;
        slow=head;
        fast=head;
        int n=1;
        while(n!=k){
            slow =slow->next;
            n++;
        }
        n=1;
        int p =(node-k+1);
        while(n!=p){
            fast=fast->next;
            n++;
        }
        swap(slow-> val, fast-> val);
        return head;
    }
};