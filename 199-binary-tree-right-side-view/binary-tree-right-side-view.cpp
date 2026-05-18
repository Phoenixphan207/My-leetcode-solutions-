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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> a;
        if (root == nullptr) return a;

        queue<TreeNode*> res;
        res.push(root);
        TreeNode *tmp = root;
        while (!res.empty()) {
            int n = res.size();

            while (n--) {
                TreeNode *tmp = res.front();
                if (n == 0) {
                    a.push_back(tmp->val);
                }

                if (tmp->left) {
                    res.push(tmp->left);
                }
                if (tmp->right) {
                    res.push(tmp->right);
                }
                res.pop();
            }
            
        }
        return a;
    }
};
