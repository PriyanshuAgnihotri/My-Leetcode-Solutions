
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* copyNode = new ListNode();
        ListNode* prevNode= copyNode;
        ListNode* currNode=head;
        while(currNode && currNode->next){
            prevNode->next = currNode->next;
            currNode->next = prevNode->next->next;
            prevNode->next->next = currNode;
            prevNode = currNode;
            currNode = currNode->next;
        }
        return copyNode->next;
    
    }
};