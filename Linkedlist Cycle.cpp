class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
        return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;


            if(fast == slow)
                return true;
            }
        return NULL;
    }
};
