class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
     vector<vector<int>>ans;
        sort(a.begin(),a.end());
      int n=a.size();
        if(n<4)
        {
            return ans;
        }
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int y=j+1;
                int z=n-1;
                while(y<z)
                {     
                      int sum=a[i]+a[j]+a[y]+a[z]; 
                      vector<int>res;
                      if(sum==target)
                      {
                          res.push_back(a[i]);
                          res.push_back(a[j]);
                          res.push_back(a[y]);
                          res.push_back(a[z]);
                          ans.push_back(res);
                           while(z>y && a[z]==a[z-1] )
                          {
                        z--;
                         }
                          
                           while(z>y && a[y]==a[y+1] )
                        {
                        y++;
                       }
                          z--;
                          y++;
                      }
                      else if(sum>target)
                      {
                        while(z>y && a[z]==a[z-1] )
                        {
                        z--;
                         }
                          z--;
                      }
                      else
                      {
                            
                     while(z>y && a[y]==a[y+1] )
                    {
                        y++;
                    }
                          y++;
                      }
                    
                  
                }
                  while(j<n-2 && a[j]==a[j+1] )
                    {
                        j++;
                    }
            }
                while(i<n-3 && a[i]==a[i+1] )
                    {
                        i++;
                    }
                   
        }
        return ans;
    }
};
