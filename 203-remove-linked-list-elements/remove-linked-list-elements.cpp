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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr ) {
            return nullptr;
        }
        else {
           ListNode * p = head ;
           ListNode* ptr = head;

           while (p->next != nullptr) {
                if (p->next->val == val) {
                    ListNode *res = p->next ;
                    p->next = p->next->next;
                    delete res;
                }
                else 
                    p = p->next;
           }
           if (ptr->val == val) {
                ListNode * phat = ptr;
                head = ptr->next;
                delete phat;
           }
           return head;
        }  
        return nullptr;
        
    }
};