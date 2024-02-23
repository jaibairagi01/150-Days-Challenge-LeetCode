class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases
        if(head == NULL || head -> next == NULL)
        return head;

        //compute the length
        ListNode* cur = head;
        int len = 1;
        while(cur->next && ++len)
        cur = cur -> next;

        //go till that node
        cur -> next = head;
        k = k % len;
        k = len -k;
        while(k--) cur = cur -> next;

        //make the node head and broke connection
        head = cur -> next;
        cur -> next = NULL;

        return head;
    }
};
