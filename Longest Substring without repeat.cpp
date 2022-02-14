

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s = "takeUforward";
     map<char,int>M;
     int l=0;
     int max_len=0;
     int k=0;
     for(int i=0;s[i]!='\0';i++)
     {
         
         map<int,char>::iterator it = M.find(s[i]);
         if(it!= M.end())
         {
            
             l++;
            M[s[i]]=k;
             k++;
             if(l>max_len)
             {
                 max_len=l;
             }
         }
         else
         {
             l=0;
             M.clear();
         }
     }
     cout<<max_len;
    return 0;
}
