/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode *> que1;
        queue<TreeLinkNode *> que2;
        if(root)
            root->next=NULL;
        else
            return;
        TreeLinkNode *p=root; 
        TreeLinkNode *pOld=root;
        que1.push(p);
        
        while(p->left)
        {
        bool firstFlag=true;
        while(!que1.empty())
        {
            p=que1.front();
            if(firstFlag)
            {
                pOld=p;
                firstFlag=false;
            }
            else
            {
                pOld->next=p;
                pOld=p;
            }
            que2.push(p->left);
            que2.push(p->right);
            que1.pop();
        }
        pOld->next=NULL;
        while(!que2.empty())
        {
            que1.push(que2.front());
            que2.pop();
        }
        }
        
    }
    
    
    
};