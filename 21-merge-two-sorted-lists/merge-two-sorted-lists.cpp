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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        if (list1 ==nullptr && list2 == nullptr) {
            return nullptr;
        }

        ListNode *l1 = list1;
        ListNode *l2 = list2;
        ListNode *res = new ListNode(0);
        ListNode *p = res;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                p->next = l1;
                l1 = l1->next;
            }
            else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }

        if (l1 != nullptr) {
            p->next = l1;
        }
        else if (l2 != nullptr) 
            p->next = l2;

        return res->next;
    }
};
