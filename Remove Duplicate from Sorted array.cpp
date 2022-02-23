class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
      int i=0,j=1;
        while(j<n)
        {
            if(a[i]!=a[j])
            {
                swap(a[++i],a[j]);
            }
            j++;
                
        }
        return i+1;
    }
};
