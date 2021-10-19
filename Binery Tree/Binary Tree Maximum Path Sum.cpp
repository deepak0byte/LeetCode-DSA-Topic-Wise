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
    int maxPathSum(TreeNode* root) {
        int mini = INT_MIN;
        maxheight(root, mini);
        return mini;
    }
    int maxheight(TreeNode* root, int &mini) {
        if (root == NULL) return 0;
        int lh = max(0, maxheight(root->left, mini));
        int rh = max(0, maxheight(root->right, mini));
        mini = max(mini, (lh + rh + root->val));
        return root->val + max(lh, rh);
    }
};