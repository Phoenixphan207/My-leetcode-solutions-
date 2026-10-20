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
    int length_n(ListNode* head) {
        if (head == nullptr) return 0;

        int d = 0;
        ListNode* p = head;
        while (p != nullptr) {
            d ++;
            p = p->next;
        }
        return d;
    }

    ListNode* reverse_n(ListNode* head) {
        if (head == nullptr) return nullptr;
        cout << length_n(head) << endl; 
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr->next != nullptr) {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        curr->next = prev;
        return curr;
    }

    int pairSum(ListNode* head) {
        int n = length_n(head);

        int d = 0;
        ListNode* p = head;
        while (p != nullptr) {
            d ++;
            if (d == n/2 + 1) break;
            p = p->next;
        }
        
        p = reverse_n(p);
        ListNode* left = head;
        ListNode* right = p;
        int d1 = length_n(p);
        int i = 0;
        
        int max_ans = 0;
        while (i < d1) {
            int sum = left->val + right->val;
            max_ans = max(max_ans , sum);
            i ++;
            left = left->next;
            right = right->next;
        }
       
        return max_ans;
    }   
};