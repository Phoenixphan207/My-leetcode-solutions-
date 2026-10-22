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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* left = list1;
        ListNode* right = list1;

        ListNode* p2 = list2;
        while (p2->next != nullptr) {
            p2 = p2->next;
        }

        if (a == b) {
            ListNode* tmp = nullptr;
            ListNode* p = list1;
            int d = 0;
            while (p != nullptr) {
                if (d == a-1) {
                    left = p;
                }
                if (d == a) {
                    tmp = p->next;
                }
                d++;
                p = p->next;
            }

            ListNode* res = list1;
            while (res != nullptr) {
                if (res == left) {
                    res->next = list2;
                }
                if (res == p2) {
                    res->next = tmp;
                }
                res = res->next;

            }
            return list1;
        }


        ListNode* p = list1;
        int d = 0;
        while (p != nullptr) {
            if (d == a-1) left = p;
            else if (d == b + 1) right = p;
            p = p->next;
            d++;
        }

        
        cout << left->val << " " ;
        cout << p2->val << " ";
        cout << right->val;

        ListNode* tmp = list1;
        while (tmp != nullptr) {
            
            if (tmp == left) {
                tmp->next = list2;
            }
            if (tmp == p2) {
                tmp->next = right;
            }
            tmp = tmp->next;
        }
        return list1;
    }
};