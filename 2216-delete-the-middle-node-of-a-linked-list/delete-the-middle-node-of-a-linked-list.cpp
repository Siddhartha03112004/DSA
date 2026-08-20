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
    ListNode* deleteMiddle(ListNode* head) {

        // 1. Empty or one-node list
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        // 2. Find length
        ListNode* temp = head;
        int curr = 0;

        while (temp != NULL) {
            curr++;
            temp = temp->next;
        }

        // 3. Find middle index
        int middle = curr / 2;

        // 4. Reset temp
        temp = head;
        ListNode* prev = NULL;

        // 5. Move temp to middle, keeping prev behind it
        for (int i = 0; i < middle; i++) {
            prev = temp;
            temp = temp->next;
        }

        // 6. Delete middle
        prev->next = temp->next;
        delete temp;

        return head;
    }
};