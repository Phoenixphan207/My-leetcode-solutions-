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
    vector<int> change_list_2_vector(ListNode *head) {
        vector<int> res;

        if (head == nullptr) {
            return res;
        }

        ListNode *p = head;
        while (p != nullptr) {
            res.push_back(p->val);
            p = p->next;
        }
        return res;
    }

   vector<int> reverse_arr(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
    return arr;
}

    void reorderList(ListNode* head) {
        vector<int> phat;
        phat = change_list_2_vector(head);     
        int n = phat.size();

        vector<int> res1;
        vector<int> res2;

        for (int i = n/2 ; i < n; i++) {
            res2.push_back(phat[i]);
        }
        res2 = reverse_arr(res2, 0 , res2.size() -1);

        for (int i = 0 ; i < n/2; i++) {
            res1.push_back(phat[i]);
        }

        int left = 0;
        int right = 0;
        vector<int>res; 
        while (left < res1.size() && right < res2.size()) {
            res.push_back(res1[left]);
            res.push_back(res2[right]);
            left ++;
            right ++;
        }
        while (left < res1.size()){
            res.push_back(res1[left]);
            left ++;
        }
        while (right < res2.size()) {
            res.push_back(res2[right]);
            right++;
        }

        ListNode* p = head;
        int idx = 0;
        while (p != nullptr && idx < res.size()) {
            p->val = res[idx];   
            p = p->next;
            idx++;
        }

    }
};
