
#include<bits/stdc++.h>

void dfsz(unordered_map<int,list<int>> ans,int vis[] ,vector<int>&res,int i)
{
    res.push_back(i);
    vis[i]=1;
    for(int j:ans[i])
    {
        if(!vis[j])
        {
         dfsz(ans,vis,res,j);
        }
        
    }
    return ;
}

vector<vector<int>> depthFirstSearch(int vertex, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> ans;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u);        
    }
    
    vector<vector<int>>a;
    int vis[vertex]={0};
    for(int i=0;i<vertex;i++)
    {
    
     if(!vis[i]) {
     vector<int>res;
     dfsz(ans,vis,res,i);
          a.push_back(res);   
     }
    
        
     }
    r
