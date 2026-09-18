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
    ListNode* sum(ListNode* left, ListNode* right) {
        int t = 0;
        for (ListNode* i = left; i != right->next; i = i->next) {
            t += i->val;
        }
        return new ListNode(t);
    }

    ListNode* mergeNodes(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next->val == 0) return head;

        ListNode* left = head;
        ListNode* right = head->next;
        ListNode* res = new ListNode(0);
        ListNode* p = res;
        
        while (right != nullptr) {
            if (right->val != 0) {
                right = right->next;
            }
            else {
                ListNode* tmp = sum(left, right);
                p->next = tmp;
                p = tmp;
                left = right;
                if(right->next != nullptr) {
                    right = right->next;
                }
                else break;
            }
        }

        ListNode* h1 = res->next;
        ListNode* tmp = res;
        delete tmp;

        return h1;
    }
};