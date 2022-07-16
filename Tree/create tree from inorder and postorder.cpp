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
     int find(int x,vector<int>inorder,int n) 
    {
        for(int i=0;i<n;i++)
        {
            if(inorder[i]==x)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>inorder,vector<int>postorder,int& ps,int is,int ie,int n)
    {
        
         if(ps>=n || is>ie)
         {
            return NULL;
         }
         int element=postorder[ps--];
         int pos=find(element,inorder,n);
         TreeNode* root=new TreeNode(element);
         root->right=solve(inorder,postorder,ps,pos+1,ie,n);
         root->left=solve(inorder,postorder,ps,is,pos-1,n);
  
         return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int index=postorder.size()-1;
        
     return   solve(inorder,postorder,index,0,inorder.size()-1,postorder.size());
    }
};
