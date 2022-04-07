class Solution {
public:
    int strStr(string haystack, string needle) {
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
                if(j==0)
                {
                    ans=i;
                }
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
             if(j==n2)
        {
            return ans;
        }
        }
       
        return -1;
    }
};
