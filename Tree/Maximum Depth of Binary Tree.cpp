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
    int maxDepth(TreeNode* root) {
       if(root==NULL)
       {
           return 0;
       }        
     return height(root);      
    }
};
