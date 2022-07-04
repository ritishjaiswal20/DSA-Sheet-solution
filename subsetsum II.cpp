class Solution {
public:
    void fun(int ind,vector<int>a,int n,vector<vector<int>>&ans,vector<int>&ds)
    {
        ans.push_back(ds);
        for(int i=ind;i<n;i++)
        {
            if(i!=ind && a[i]==a[i-1]) continue;
            ds.push_back(a[i]);
            fun(i+1,a,n,ans,ds);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        fun(0,nums,nums.size(),ans,ds);
        return ans;
    }
};
