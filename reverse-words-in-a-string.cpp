class Solution {
public:
    string reverseWords(string a) {
        string temp="";
        stack<string> st;
        string t=" ";
        for(int i=0;i<a.size();i++)
        {
            if((i==0 && a[i]==' ')) 
            {
                continue;
            }
            if(a[i]==' ' && a[i-1]==a[i])
            {
                continue;
            }
            
            if(a[i]!=' ' ){
                temp+=a[i];
            }
            else{
                st.push(temp);
                temp="";
                t=" ";
                st.push(t);
            }
        }
        string ans="";
        if(temp!=t){
        ans+=temp;}
        else
        {
            st.pop();
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
    
};
