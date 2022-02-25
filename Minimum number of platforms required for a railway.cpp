
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void maxMeet(int s[],int e[],int n)
{
    sort(s,s+n);
    sort(e,e+n);
    int c=1;
    int maxc=1;
    int i=1;
    int j=0;
   while(i<n && j<n)
   {
       if(s[i]<=e[j])
      {
          c++;
          i++;
      }
      else
      {
          j++;
          c--;
      }
      
      if(maxc<c)
      {
          maxc=c;
      }
   }
  cout<<maxc;
}
int main() {
 
    int n = 6;
    int start[]={900,945,955,1100,1500,1800};
    int end[]={920,1200,1130,1150,1900,2000};
    maxMeet(start, end, n);
    return 0;
}
