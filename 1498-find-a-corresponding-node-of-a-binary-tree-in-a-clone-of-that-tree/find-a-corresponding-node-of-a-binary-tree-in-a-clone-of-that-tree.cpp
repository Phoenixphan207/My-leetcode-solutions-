/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == nullptr || cloned == nullptr) 
            return nullptr;

        queue<TreeNode*> res;
        res.push(cloned);
        while (!res.empty()) {
            TreeNode* tmp = res.front();
            if (tmp->val == target->val)
                return tmp;

            res.pop();
            if (tmp->left != nullptr) res.push(tmp->left);
            if (tmp->right != nullptr) res.push(tmp->right); 
        }
        return nullptr;
    }
};