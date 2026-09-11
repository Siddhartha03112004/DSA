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
    ListNode* oddEvenList(ListNode* head) {

        if(!head || head -> next == NULL) return head;

        ListNode* Dummy1 = new ListNode(-1);
        ListNode* Dummy2 = new ListNode(-1);

        ListNode* odd = Dummy1;
        ListNode* even  = Dummy2;

        ListNode* temp = head;
        int count = 1;

        while(temp != NULL) {
            if(count % 2 == 1) {
                odd -> next = temp;
                odd = odd -> next;
            }
            else {
                even -> next = temp;
                even = even -> next;
            }

            temp = temp -> next;
            count++;
        }
        even -> next = NULL;
        odd -> next = Dummy2 -> next;

    return Dummy1 -> next;
    }
};