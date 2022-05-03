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
    bool findTarget(TreeNode* root, int k) {
        vector<int>a;
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
                a.push_back(t->val);
                t=t->right;
            }
        }
        int x=0;
        int y=a.size()-1;
        while(x<y)
        {   int sum=a[x]+a[y];
         if(k==sum)
         {
             return true;
         }
            if(k>(sum)){
                x++;
            }
         else{
             y--;
         }
        }
        return false;
    }
};
