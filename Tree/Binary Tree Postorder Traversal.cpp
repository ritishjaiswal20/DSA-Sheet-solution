class Solution {
public:
    vector<int> postorderTraversal(TreeNode* t) {

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
               
                if(t->right){
                   st.push(t);

                    t=t->right;

                } 
                else{
                    a.push_back(t->val);
                    t=st.top();
                    st.pop();
                    t=t->right;
                }
            }
            
        }
        return a;
        
    }
   
};
