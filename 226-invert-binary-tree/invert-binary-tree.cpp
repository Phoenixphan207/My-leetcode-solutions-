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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr ) return nullptr;
        else if (root->left  == nullptr && root->right == nullptr) return root;
        else {
            TreeNode *tmp = root->left;
            root->left = root->right;
            root->right = tmp;
        }

        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);
        root->left = left;
        root->right = right;
        return root;
    }
};
