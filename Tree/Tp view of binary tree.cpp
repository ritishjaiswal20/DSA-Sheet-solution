class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
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
            if( map.find(line)==map.end())
            {
                 map[line]=p->data;
            }
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
