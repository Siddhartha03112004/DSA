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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        // Reverse the linked list
        head = reverseList(head);

        ListNode* current = head;
        int carry = 0;

        while (current != nullptr) {
            // Double the current digit
            int sum = current->val * 2 + carry;

            // Update digit
            current->val = sum % 10;

            // Update carry
            carry = sum / 10;

            // If this is the last node and carry remains,
            // create a new node
            if (current->next == nullptr && carry != 0) {
                current->next = new ListNode(carry);
                carry = 0;
                break;
            }

            current = current->next;
        }

        // Reverse back to original order
        head = reverseList(head);

        return head;
    }
};
