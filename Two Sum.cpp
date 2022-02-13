#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     vector<int> a;
     a={8,2,3,9,6,4};

     int max=8;
     int h[max+1]={0};
     for(int i=0;i<a.size();i++)
     {
         h[a[i]]++;
     }
     int target;
     cout<<endl;
     cout<<"enter target element";
     cin>>target;
     cout<<endl;
     int x,y;
     for(int i=0;i<a.size();i++)
     {
         x=a[i];
           if(target>a[i] && (h[target-a[i]]))
           {    
               for(int y=0;y<a.size();y++)
               {
                   if(a[y]==(target-x))
                   {
                       cout<<"index1   "<<i<<"   index2   "<<y;
                   }
               }
               break;
           }
     }
         
    return 0;
}
