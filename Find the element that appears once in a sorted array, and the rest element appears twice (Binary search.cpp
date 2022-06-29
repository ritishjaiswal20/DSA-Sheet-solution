class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mid % 2==0)
            {
                if(nums[mid] !=nums[mid+1])
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
                if(nums[mid]==nums[mid+1])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            
        }
        return nums[low];
    }
    
   
    
};



 
 //2nd solution

class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
          int n=a.size();
        if(n==1)
        {
            return a[0];
        }
        if(a[0]!=a[1])
        {
            return a[0];
        }
        if(a[n-1]!=a[n-2])
        {
            return a[n-1];
        }
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]!=a[mid+1] && a[mid]!=a[mid-1])
            {
                return a[mid];
            }
            if((mid%2==0 && a[mid]==a[mid+1]) || (mid%2==1 && a[mid]==a[mid-1]))
            {
                low=mid+1;
            }
            else
            {
            high=mid-1;
            }
        }
        return -1;
    }
};
