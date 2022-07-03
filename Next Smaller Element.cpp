vector<int> Solution::prevSmaller(vector<int> &a) {

    stack<int>st;
    int n=a.size();
    vector<int> se(n);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && st.top()>=a[i])
        {
            st.pop();
        }
        if(!st.empty())
        {
            se[i]=st.top();
            st.push(a[i]);
        }
        else
        {
            se[i]=-1;
            st.push(a[i]);
        }
    }
    return se;
}
