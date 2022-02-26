class Solution
{
public: 
    void func(int ind,int sum,vector<int>& arr,int N,vector<int>& subset)
    {
        if(ind==N)
        {
            subset.push_back(sum);
            return ;
        }
        func(ind+1,sum+arr[ind],arr,N,subset);
        func(ind+1,sum,arr,N,subset);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> subset;
        func(0,0,arr,N,subset);
        sort(subset.begin(),subset.end());
        return subset;
    }
};
