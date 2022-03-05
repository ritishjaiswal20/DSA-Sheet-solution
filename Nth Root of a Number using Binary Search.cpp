#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double mul(int number,int n)
{
    double ans=1.0;
    for(int i=1;i<=n;i++)
    {
         ans=ans*number;
    }
    return ans;
}

double powe(int n,int m)
{
    double low=0;
    double high=m;
    double esp=1e-6;
    while((high-low)> esp)
    {
      double mid=(low+high)/2.0;
      if(mul(mid,n) < m)
      {
          low=mid;
      }
      else
      {
          high=mid;
      }
    }
      cout <<n<<"th root of "<<m<<" is "<<low<<endl; 
      return low;
}

int main()
{
    cout<<"Hello World";
     cout<<powe(3,27);
    return 0;
}
