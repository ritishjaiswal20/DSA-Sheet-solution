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
        
