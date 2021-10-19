class solution{
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL) return 0;
		int lt = maxDepth(root->left);
		int rt = maxDepth(root->right);
		return 1 + max(lt, rt);
	}
};

//leetCode question MaxDepth of a binary tree..