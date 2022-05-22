class Solution {
  public:
      void df(int i,vector<int>adj[],vector<int>&storedfs,vector<int>&vis)
     {
          storedfs.push_back(i);
          vis[i]=1;
          for(auto it:adj[i])
          {
              if(!vis[it])
              {
                  df(it,adj,storedfs,vis);
              }
          }
         
     }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code her   
        vector<int>storedfs;
        vector<int>vis(v,0);
        df(0,adj,storedfs,vis);
        return storedfs;
    }
};
