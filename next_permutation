#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void nextperm(vector<int>&a)
{
    int n=a.size();
    if(n==1)
    {
        return ;
    }
    int lastinc=-1;
    int i=1;
    while(i<n)
    {
        if(a[i]>a[i-1])
        {
            lastinc=i;
        }
        i++;
    }
    if(lastinc==-1)
    {
        sort(a.begin(),a.end());
    }
    int m=a[lastinc];
    int index=lastinc;
    for(int i=index;i<n;i++)
    {
        if(a[i]>a[lastinc-1]  && a[i]<a[lastinc])
        {
            index=i;
        }
    }
    
    swap(a[lastinc-1],a[index]);
    sort(a.begin()+lastinc,a.end());
}
int main()
{
     cout<<"Hello World";
     vector<int>v;
     v.push_back(6);
     v.push_back(8); 
     v.push_back(7); 
     v.push_back(2); 
     v.push_back(7);
     v.push_back(9); 
     v.push_back(8);
     v.push_back(6);
     nextperm(v);
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }

    return 0;
}
