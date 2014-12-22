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
    void preorder(TreeNode* root, vector<int> &path)  
    {  
        if(root!=NULL)  
        {  
            path.push_back(root->val);  
            preorder(root->left, path);  
            preorder(root->right, path);  
        }  
    }  
    vector<int> preorderTraversal(TreeNode *root) {  
        // IMPORTANT: Please reset any member data you declared, as  
        // the same Solution instance will be reused for each test case.  
        vector<int> path;  
        preorder(root, path);  
        return path;  
    }  
};