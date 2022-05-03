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
    int kthSmallest(TreeNode* root, int k) {
        int c=1;
        if(root==NULL)
        {
            return -1;
        }
        stack<TreeNode*> st;
       TreeNode* t=root;
        while(t!=NULL || !st.empty())
        {
            
            if(t!=NULL)
            {
                st.push(t);
                t=t->left;
            
            }
            else{
                t=st.top();
                st.pop();
                if(c==k)
                {
                    return t->val;
                }
                c++;                
                t=t->right;
            }
        }
        return -1;
        
        
    }
};
