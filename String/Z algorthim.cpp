int zAlgorithm(string haystack, string needle, int n, int m)
{
	// Write your code here
       int n1=haystack.size();
        int n2=needle.size();
        int j=0;
        int ans=0;
        if(n2==0 || haystack==needle ){
            return 0;
        }
        for(int i=0;i<n1;i++)
        {
            if(haystack[i]==needle[j])
            {
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
             if(j==n2)
          {
            ans++;
          }
        }
       
        return ans;
    }
