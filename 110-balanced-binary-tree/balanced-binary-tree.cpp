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
    int height_node (TreeNode* root) {
        if (root == nullptr) return 0;

        int d = height_node(root->left);
        int s =  height_node(root->right) ;
        int res = max(d,s) + 1;
        return res ;

    }  

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int leftH = height_node(root->left);
        int rightH = height_node(root->right);

        if (abs(leftH - rightH) > 1) return false;

        return isBalanced(root->right) && isBalanced(root->left);
    }
};
