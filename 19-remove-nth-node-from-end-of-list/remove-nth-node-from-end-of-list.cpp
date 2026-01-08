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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int d = 0;
        for (ListNode *res = head ; res != nullptr ; res = res->next) {
            d ++;
        }
        if (d == 1 || d == 0) return nullptr;
        
        int t = d - n + 1;
        if (t == d) {
            ListNode *ptr = head;

            while (ptr->next->next != nullptr) {
                ptr = ptr->next;
            }
            ListNode *dum = ptr->next;
            ptr->next = nullptr;
            delete dum;
            return head;
        }
        if (t == 1) {
            ListNode *dummy = head;
            head = head -> next;
            delete dummy;
            return head;
        }

        ListNode *p = head;
        int phat = 0;
        while (p != nullptr && phat < t - 2 ) {
            p = p->next;
            phat ++;
        }
        if (p == nullptr) {
            return nullptr;
        }

        ListNode *res = p->next;
        p->next = p->next->next;
        delete res;
        return head;
    }
};