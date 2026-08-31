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
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;
        while (temp && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;

        while (temp) {
            ListNode* kth = getKthNode(temp, k);
            if (!kth) {
                if (prevLast) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kth->next;
            kth->next = nullptr;
            reverseList(temp);

            if (temp == head)
                head = kth;
            else
                prevLast->next = kth;

            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};