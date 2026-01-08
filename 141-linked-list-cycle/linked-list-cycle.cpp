/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr ) {
            return false;
        }
        else {
            if (head->next == nullptr) {
                return false;
            }
            else {
                ListNode* left = head ;
                ListNode* right = head->next;

                while (left != right) {
                    //kiem tra TH 2; 1 phan tu: 
                    if (right == nullptr || right->next == nullptr) {
                        return false;
                    }
                    left = left->next;
                    if(right->next->next == nullptr) {
                        return false;
                    }
                    else {
                        right = right->next->next;
                    }
                }
                return true;
            }
        }
    }
};