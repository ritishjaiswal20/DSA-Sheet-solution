//hash solution
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World";
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(100);
    v.push_back(300);
    
    int max=300;
    int h[max+1]={0};
    for(int i=0;i<v.size();i++)
    {
        h[v[i]]++;
    }
    int count=1;
    int maxcount=1;
    for(int i=0;i<v.size();i++)
    {
       if(h[v[i]+1]>0)
       {
           count++;
           if(count>maxcount)
           {
               maxcount=count;
           }
       }
       else
       {
           count=0;
       }
    }
    cout<<endl;
    cout<<maxcount;
    return 0;
}
