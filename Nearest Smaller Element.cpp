
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World";
    vector < int > a{4, 5, 2, 10, 8};
    int n=a.size();
    stack <int> st;
    int nge[n];
    cout<<"hello";
int j=0;

    for(int i=0;i<n;i++)
    {
        while(!st.empty() && st.top()>=a[i])
        {
            st.pop();
        }
        
            if(!st.empty())
            {
                nge[i]=st.top();
                st.push(a[i]);
            }else{
                nge[i]=-1;
                st.push(a[i]);
            }
        
    }

    for(int i=0;i<n;i++)
    {
        cout<<nge[i]<<" ";
    }
    return 0;
}
