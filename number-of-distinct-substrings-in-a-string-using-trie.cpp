
   
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Node
{     
    public:
	 Node* link[26];
};





int countDistinctSubstrings(string& s)
{    
     int count=0;
     Node* root=new Node();
  
    for(int i=0;i<s.size();i++)
    {
        Node * node = root;

        for(int j=i;j<s.size();j++)
        {
            if(!node->link[s[j]-'a'])
            {
                count++;
                Node* t= new Node();
                node->link[s[j]-'a']=t;
            }
            node=node->link[s[j]-'a'];
        }
    }
    return count+1;
}




int main()
{
   string s1 = "ababa";
  cout << "Total number of distinct substrings : " << countDistinctSubstrings(s1);
  cout << "\n";

  string s2 =  "ccfdf";
  cout << "Total number of distinct substrings : " << countDistinctSubstrings(s2);

    return 0;
}
