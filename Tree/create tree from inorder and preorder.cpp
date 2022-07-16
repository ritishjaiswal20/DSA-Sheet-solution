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
    TreeNode* solve(vector<int>inorder,vector<int>preorder,int& ps,int is,int ie,int n)
    {
        
        if(ps>=n || is>ie)
        {
            return NULL;
        }
        int element=preorder[ps++];
        int pos=find(element,inorder,n);
        TreeNode* root=new TreeNode(element);
        root->left=solve(inorder,preorder,ps,is,pos-1,n);
         root->right=solve(inorder,preorder,ps,pos+1,is,n);
         return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        int index=0;
        
     return   solve(preorder,inorder,index,0,inorder.size()-1,preorder.size());
    }
};
