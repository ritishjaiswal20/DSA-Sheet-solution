class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        queue<pair<Node*,int>>q;
        if(root==NULL)
        {
            return ans;
        }
        int line=0;
        map<int,int>map;
        q.push({root,line});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            Node* p=it.first;
            line=it.second;
            map[line]=p->data;
            if(p->left)
            {
                q.push({p->left,line-1});
            }
              if(p->right)
            {
                q.push({p->right,line+1});
            }
        }
        for(auto it:map)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
