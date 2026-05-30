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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) return -1;

        int s = low + high;
        queue<TreeNode*> res;
        res.push(root);
        while (!res.empty()) {
            TreeNode *tmp = res.front();

            if (tmp->val > low && tmp->val < high) {
                s += tmp->val;
            }
            res.pop();

            if (tmp->left != nullptr ) 
                res.push(tmp->left);
            if (tmp->right != nullptr ) 
                res.push(tmp->right);
        }
        return s;
    }
};