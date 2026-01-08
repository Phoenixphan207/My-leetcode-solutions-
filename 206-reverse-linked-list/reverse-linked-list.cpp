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
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* p = head;
        vector<int> ptr;

        while (p != nullptr) {
            ptr.push_back(p->val);
            p = p->next;
        }

        std::reverse(ptr.begin(), ptr.end());

        ListNode* phat = new ListNode(ptr[0]);
        ListNode* tail = phat;
        
        for (int i = 1; i < ptr.size(); i++) {
            ListNode* arr = new ListNode(ptr[i]);
            tail->next = arr;
            tail = arr;
        }
        return phat;
    }
};