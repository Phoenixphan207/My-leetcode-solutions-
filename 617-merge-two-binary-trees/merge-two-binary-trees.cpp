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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return nullptr;
        }

        if (root1 == nullptr && root2 != nullptr) return root2;
        if (root1 != nullptr && root2 == nullptr) return root1;

        int r1 = root1->val;
        int r2 = root2->val;

        TreeNode* root = new TreeNode(r1 + r2);
        root->left = mergeTrees(root1->left , root2->left);
        root->right = mergeTrees(root1->right , root2->right);

        return root;
    }
};