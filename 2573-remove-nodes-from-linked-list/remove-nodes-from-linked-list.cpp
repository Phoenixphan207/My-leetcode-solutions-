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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
}

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);

        // B2: duyệt và giữ node >= maxSoFar
        ListNode* dummy = new ListNode(0);
        ListNode* p = dummy;
        int maxSoFar = INT_MIN;

        for (ListNode* curr = head; curr; curr = curr->next) {
            if (curr->val >= maxSoFar) {
                maxSoFar = curr->val;
                p->next = curr;
                p = curr;
            }
        }

        // cắt đuôi
        p->next = nullptr;

        // B3: đảo ngược lại để trả về list đúng thứ tự
        return reverse(dummy->next);
    }

};