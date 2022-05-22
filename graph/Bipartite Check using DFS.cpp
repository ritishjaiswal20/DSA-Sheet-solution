class Solution {
public:
    bool check(int src,vector<vector<int>>adj,vector<int>&color)
    {
       if(color[src]==-1){
        color[src]=1;
       }
        
            for(auto it:adj[src])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[i];
                    if(!check(it,adj,color)
                    {
                    return false;
                    }
                }
                else if(color[it]==color[i])
                {
                    return false;
                }
            }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color[graph.size()];
        memset(color,-1,sizeof color);
        for(int i=0;i<graph.size();i++)
        {
            if(!check(i,graph,color))
            {
                return false;
            }
        }
        return true;
    }
};
