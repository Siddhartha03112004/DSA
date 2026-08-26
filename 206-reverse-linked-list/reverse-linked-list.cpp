class Solution {
public:
    ListNode* reverseList(ListNode* head) {     // reverse a linked list
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;

            // updation for next itr
            prev = curr;
            curr = next;
        }

        head = prev;
        return head;
    }
};
