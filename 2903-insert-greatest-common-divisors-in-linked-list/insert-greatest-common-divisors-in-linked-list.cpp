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
    ListNode* gcd(ListNode* left , ListNode* right) {
        int a = left->val;
        int b = right->val;
        while (b > 0) {
            int c = a%b;
            a = b;
            b = c;
        }
        ListNode* tmp = new ListNode(a);
        return tmp;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;

        ListNode* left = head;
        ListNode* right = head->next;
        while (right->next != nullptr) {
            ListNode* tmp = gcd(left, right);
            tmp->next = right;
            left->next = tmp;
            left = right;
            right = right->next;
        }
        ListNode* res = gcd(left , right);
        res->next = right;
        left->next = res;

        return head;

    }
};