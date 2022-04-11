class Solution {
public:
    vector<int> preorderTraversal(TreeNode* t) {
        vector<int>a;
        stack<TreeNode*> st;
       
        while(t!=NULL || !st.empty())
        {
            
            if(t!=NULL)
            {    
                a.push_back(t->val);
                st.push(t);
                t=t->left;
            }
            else{
                t=st.top();
                st.pop();
               
                t=t->right;
            }
            
        }
        return a;
        
    }
};
