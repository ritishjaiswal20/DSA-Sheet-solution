
int Mx(vector<int>& nums, int k) {
        deque<int> q;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(!q.empty() && q.front()==i-k)
            {
                q.pop_front();
            }
            while(!q.empty() && nums[q.back()]<=nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            if(i>=k-1)
            {
                ans.push_back(nums[q.front()]);
            }
        }
        return max(ans,ans+ans.size());
        
    }


vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    int Mmax=INT_MIN;
    int mx;
    for(int i=1;i<=n;i++)
    {
        mx=Mx(a,i);
        if(mx>Mmax)
        {
            Mmax=mx;
        }
    }
    return Mmax;
} 
