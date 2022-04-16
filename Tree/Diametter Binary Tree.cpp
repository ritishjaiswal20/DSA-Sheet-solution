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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int x=height(root->left);
        int y=height(root->right);
        if(x>y)
        {
            return x+1;
        }
        else
        {
            return y+1;
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL){
            return 0;
        }
        int maxh=0;
        
    
    while(!q.empty())
    {   
        TreeNode *p=q.front();
        q.pop();
        int z=height(p->left);
        int y=height(p->right);
        int x=z+y;
        if(x>maxh)
        {
            maxh=x;
        } 
        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
         q.push(p->right);
         } 
    }
    return maxh;  
 } 

};



