class Solution {
public:
    string longestPalindrome(string a) {
       int n=a.size();
       
        int m[n][n];
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    m[i][j]=1;
                }
                else
                {
                m[i][j]=0;
                }
            }
        }
        int start=0;
        int max=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                m[i][i+1]=1;
                start=i;
                max=2;
            }
        }
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int e=j+i-1;
                if(a[j]==a[e]  && m[j+1][e-1])
                {
                    m[j][e]=1;
                    if(i>max){
                        max=i;
                        start=j;
                    }
                }
            }
        }
        
        
        
        string ans="";
        for(int i=start;i<start+max;i++)
        {
            ans+=a[i];
        }
        return ans;
        
        
        
        
        
        
    }
};
