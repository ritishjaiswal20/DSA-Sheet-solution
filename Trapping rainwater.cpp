class Solution {
public:
    int trap(vector<int>& a) {
       int n=a.size();
       int l[n];
        int r[n];
        int max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            l[i]=max;
        }
        max=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            r[i]=max;
        }
         int sum=0;
        for(int i=1;i<n;i++)
        {
            if(l[i]>r[i])
            {
                sum+=(r[i]-a[i]);
            }
            else
            {
                sum+=(l[i]-a[i]);
            }
        }
        return sum;
    }
};
