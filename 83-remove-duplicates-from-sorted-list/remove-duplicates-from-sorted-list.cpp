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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* p =head;

        if (p->next == nullptr) {
            return p;
        }
        else {
            while (p->next != nullptr && p!= nullptr) {
                if (p->val == p->next->val) {
                    p->next = p->next->next;
                }
                else p = p->next;
            }
            return head;
        }
    }
};