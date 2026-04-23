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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int d = maxDepth(root->left);
        int s =  maxDepth(root->right) ;
        int res = max(d,s) + 1;

        return res ;

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p != nullptr && q == nullptr) return false;
        if (p == nullptr && q != nullptr) return false;
        TreeNode *p1 = p;
        TreeNode *q1 = q;
        
        if ((p1->val != q1->val) || (maxDepth(p1) != maxDepth(q1))) return false;

        return isSameTree(p1->left , q1->left) && isSameTree(p1->right , q1->right);
    }
};
