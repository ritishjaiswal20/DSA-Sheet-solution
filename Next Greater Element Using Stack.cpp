
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World";
    vector < int > a{5,7,1,2,6,0};
    int n=a.size();
    stack <int> st;
    int nge[n];
    cout<<"hello";
int j=0;
while(j<2)
{
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=a[i])
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
        // if(i==0)
        // {
        //   +  i=n-1;
        // }
    }
 j++;   
}
    for(int i=0;i<n;i++)
    {
        cout<<nge[i]<<" ";
    }
    return 0;
}
