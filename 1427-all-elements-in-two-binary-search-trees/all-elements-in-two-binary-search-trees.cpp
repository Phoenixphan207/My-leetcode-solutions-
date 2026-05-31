/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> arr1;
    vector<int> arr2;
    
    void inorder_first(TreeNode* root1) {
        if (root1 == nullptr) return;

        inorder_first(root1->left);

        arr1.push_back(root1->val);

        inorder_first(root1->right);
    }

    void inorder_second(TreeNode* root1) {
        if (root1 == nullptr) return;

        inorder_second(root1->left);

        arr2.push_back(root1->val);

        inorder_second(root1->right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder_first(root1);
        inorder_second(root2);

        vector<int> res;
        if (root1 == nullptr && root2 == nullptr) return res;
        if (root1 == nullptr && root2 != nullptr) {
            return arr2;
        }
        if (root1 != nullptr && root2 == nullptr) return arr1;

        int left = 0;
        int right = 0;
        while (left < arr1.size() && right < arr2.size()) {
            if (arr1[left] < arr2[right]) {
                res.push_back(arr1[left]);
                left ++;
            }
            else {
                res.push_back(arr2[right]);
                right ++;
            }
        }
        while (left < arr1.size()) {
            res.push_back(arr1[left]);
            left ++;
        }
        while (right < arr2.size()) {
            res.push_back(arr2[right]);
            right ++;
        }

        return res;
    }
};