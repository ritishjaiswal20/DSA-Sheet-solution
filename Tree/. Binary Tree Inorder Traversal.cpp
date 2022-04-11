
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* t) {
        vector<int>a;
        stack<TreeNode*> st;
       
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
        return a;
        
        
    }
};
