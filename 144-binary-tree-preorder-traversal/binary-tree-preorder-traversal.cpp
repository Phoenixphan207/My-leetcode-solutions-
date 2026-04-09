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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) return res;

        vector<int> left;
        vector<int> right;

        left = preorderTraversal(root->left);
        right = preorderTraversal(root->right);

        res.push_back(root->val);
        for (int i : left){
            res.push_back(i);
        }
        for (int i : right){
            res.push_back(i);
        }

        return res;
    }
};