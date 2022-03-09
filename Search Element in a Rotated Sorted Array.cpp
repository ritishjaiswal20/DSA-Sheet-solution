class Solution {
public:
    int search(vector<int>& a, int x )
    {
        int n=a.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
           int mid = (low + high) >> 1;
            if(a[mid]==x)
            {
                return mid;
            }
            
            
            if(a[low]<=a[mid])
            {
              if(a[low] <= x && a[mid] >= x)
              {
                  high=mid-1;
              }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(a[mid] <= x && x <= a[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                    
            }
        }
        return -1;
    }
};
