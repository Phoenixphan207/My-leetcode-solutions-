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

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);

        arr.push_back(root->val);

        inorder(root->right);   
    }

    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);

        TreeNode* new_root = new TreeNode(arr[0]);
        TreeNode * p = new_root;
        for (int i = 1 ; i < arr.size() ; i++) {
            TreeNode * tmp = new TreeNode(arr[i]);

            p->right = tmp;
            p = tmp;
        }

        return new_root;
    }
};