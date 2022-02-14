#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> foursum(vector<int> a,int target)
{
    int n=a.size();
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
             int front=j+1;
             int back=n-1;
             while(front<back)
             {
                 int sum=a[front]+a[back]+a[i]+a[j];
                 if(sum>target)
                 {
                     back--;
                 }
                 else if(sum < target)
                 {
                     front++;
                 }
                 else
                 {
                        vector<int>s;
                     
                        s.push_back(a[i]);
                        s.push_back(a[j]);
                        s.push_back(a[front]);
                        s.push_back(a[back]);
                        ans.push_back(s);
                      
                      while(front<back && a[front]==s[2]){
                          front++;
                      }
                        while(front<back && a[back]==s[3]){
                          back--;
                      }
                 }
                 
             }
             while(j+1<n && a[j]==a[j+1])
             {
                 j++;
             }
             
         }
             while(i+1<n && a[i]==a[i+1])
             {
                 i++;
             }
    }
    return ans;
}
int main()
{
    
    vector<int> v{1,0,-1,0,-2,2};
    
    vector<vector<int>> sum=foursum(v,0);
    cout<<"The unique quadruplets are"<<endl;
    for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
