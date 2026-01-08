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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int nho = 0;
        ListNode *p = new ListNode;
        ListNode* tmp = p ;
        while (l1 != nullptr || l2 != nullptr || nho > 0){
            int s1 = (l1 != nullptr) ? l1->val : 0;
            int s2 = (l2 != nullptr) ? l2->val : 0;
            int s = s1 + s2 + nho;
            nho = s/10;
            s = s%10;

            tmp->next = new ListNode(s);
            tmp = tmp->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        ListNode* res = p->next;
        delete p;

        return res;
    }
};