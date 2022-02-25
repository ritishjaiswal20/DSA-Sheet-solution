
#include <iostream>
#include <bits/stdc++.h>
class me{
    public:
    int pos;
    int st;
    int ed;
};
using namespace std;
  bool static comparator( me m1, me m2) {
         if (m1.ed < m2.ed) return true;
         else if (m1.ed > m2.ed) return false;
         else if (m1.pos < m2.pos) return true;
         return false;
      }
void maxMeet(int s[],int e[],int n)
{
    me m[n];
    for(int i=0;i<n;i++)
    {
        m[i].st=s[i];
        m[i].ed=e[i];
        m[i].pos=i+1;
    }
    sort(m,m+n,comparator);
    int limit=m[0].ed;
    vector<int> ans;
    ans.push_back(m[0].pos);
    for(int i=1;i<n;i++)
    {
        if(m[i].st>=m[i-1].ed)
        {
            ans.push_back(m[i].pos);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main() {
 
   int n = 6;
   int start[] = {1,3,0,5,8,5};
   int end[] = {2,4,5,7,9,9};
   maxMeet(start, end, n);
   return 0;
}
