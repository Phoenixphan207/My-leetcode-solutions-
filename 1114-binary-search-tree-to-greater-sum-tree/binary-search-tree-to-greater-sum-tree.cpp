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
    vector<int> arr;
    void inorder(TreeNode * root) {
        if (root == nullptr) return;

        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }

    void update(TreeNode* root) {
        if (root == nullptr) return;

        update(root->left);
        int s = 0;

        for (int i : arr) {
            if (i >= root->val) {
                s += i;
            }
        }
        root->val = s;
        update(root->right);
    }

    TreeNode* bstToGst(TreeNode* root) {
        if (root == nullptr) return nullptr;

        inorder(root);
        update(root);
        return root;
    }

   
};