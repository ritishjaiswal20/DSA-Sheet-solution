class Solution {
public:
  void find(int ind,int target,vector<int>&a,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ind==a.size())
        {   
            if(target==0)
            {
            ans.push_back(ds);
            }
            return;
        }
        if(a[ind]<=target)
        {
            ds.push_back(a[ind]);
            find(ind+1,target-a[ind],a,ans,ds);
            ds.pop_back();
        }
         while(ind+1<a.size() && a[ind]==a[ind+1]){
            ind++; //removes duplicates 
        }
        find(ind+1,target,a,ans,ds);
    }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        find(0,target,candidates,ans,ds);
          
         return ans;
    }
};
