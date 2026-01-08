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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        if (list1 == nullptr && list2 != nullptr) {
            return list2;
        }
        if (list1 != nullptr && list2 == nullptr) {
            return list1;
        }
        ListNode* p1 = list1;
        ListNode* p2 = list2;

        vector<int> res1;
        vector<int> res2;

        while (p1 != nullptr){
            res1.push_back(p1->val);
            p1 = p1->next;
        }
        while (p2 != nullptr) {
            res2.push_back(p2->val);
            p2 = p2 -> next;
        }

        int left = 0;
        int right = 0;
        int n = res1.size();
        int m = res2.size();

        vector<int> p3;
        while (left < n && right < m) {
            if (res1[left] < res2[right]) {
                p3.push_back(res1[left]); 
                left ++;
            }
            else {
                p3.push_back(res2[right]);
                right ++ ;
            }
        }
        while (left < n) {
            p3.push_back(res1[left]);
            left ++;
        }
        while (right < m){
            p3.push_back(res2[right]) ;
            right++;
        }

        ListNode* phat = new ListNode(p3[0]);
        ListNode* temp = phat ;

        for (int i = 1 ; i < p3.size() ; i++) {
            ListNode* arr = new ListNode(p3[i]);
            temp->next = arr;
            temp = arr;
        }
        return phat;
    }
};