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
    bool check_palindrome( vector<int> p) 
    {
        int n = p.size();

        for (int i = 0 ; i < n/2 ; i++) {
            if (p[i] != p[n-i-1]) 
                return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return false;
        }
        else {
            if (head -> next == nullptr){
                return true;
            }
            else {
                vector<int> p;

                ListNode* res = head;

                while (res != nullptr) {
                    p.push_back(res->val);
                    res = res->next;
                }

                return check_palindrome(p);
            }
        }
    }
};