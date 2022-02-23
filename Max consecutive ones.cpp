class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
       
        int n=a.size();
        int maxi=0;
        int cn=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                cn++;
            }
            else
            {
                cn=0;
            }
            maxi=max(cn,maxi);
        }
        return maxi;
    }
};
