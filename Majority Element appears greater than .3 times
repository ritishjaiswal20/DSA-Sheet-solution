#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> count(vector<int>a)
{
    int c1,c2;
    c1=c2=0;
    int s1,s2;
    s1=s2=-1;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==s1)
        {
            c1++;
        }
        else if(a[i]==s2)
        {
            c2++;
        }
        else if(c1==0)
        {
            s1=a[i];
        }
        else if(c2==0)
        {
            s2=a[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1=0;
    c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s1)
        {
            c1++;
        }
        else if(a[1]==s2)
        {
            c2++;
        }
    }
    vector<int> b;
    if(c1>(n/3))
    {
        b.push_back(s1);
    }
    if(c2>(n/3))
    {
        b.push_back(s2);
    }
    return b;
}
int main()
{
     vector<int> v;
     int x;
     cout<<endl;
    
     for(int i=0;i<12;i++)
     {
         cin>>x;
         v.push_back(x);
     }
     vector<int>z=count(v);
     for(int i=0;i<z.size();i++)
     {
         cout<<z[i]<<" ";
     }
    return 0;
}
