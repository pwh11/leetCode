/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode *root) {
        int depth=0;
        if(root)
        {
            int leftDepth=maxDepth(root->left);
            int rightDepth=maxDepth(root->right);
            depth=leftDepth>rightDepth?leftDepth+1:rightDepth+1;
        }
        return depth;
    }
};