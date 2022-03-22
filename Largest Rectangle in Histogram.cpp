class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        
        int n=a.size();
        int pse[n];
        int nse[n];
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && a[st.top()] >=a[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                pse[i]=st.top()+1;
            }
            else
            {
                pse[i]=0;
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
              while(!st.empty() && a[st.top()] >=a[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                nse[i]=st.top()-1;
            }
            else
            {
                nse[i]=n-1;
            }
            st.push(i);
        }
        int maxa=0;
        
        for(int i=0;i<n;i++)
        {
            maxa=max(maxa,a[i]*(nse[i]-pse[i]+1));
        }
        return maxa;        
        
        
        
        
        
    }
};
