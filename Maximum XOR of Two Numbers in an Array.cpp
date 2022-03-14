#include <iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node
{
	struct Node* link[26];

};


class Trie {
	struct Node *root;
public:

Trie() 
{
    root=new Node();
}

void insert(int num) 
{
    struct Node *node=root;
    for(int i=31;i>=0;i--)
    {
        int bit=(num>>i)&1;
        if(!node->link[bit])
        {
            Node*t =new Node();
            node->link[bit]=t;
        }
        node=node->link[bit];
    }
}

int  findmax(int num) 
{
    struct Node *node=root;
    int maxNum=0;
    for(int i=31;i>=0;i--)
    { 
        int bit=(num>>i) &1;
        if(node->link[!bit])
        {
            maxNum=maxNum| 1<<i;
            node=node->link[!bit];
        }
        else
        {
            node=node->link[bit];
        }
        
    }
    return maxNum;
}

int maxXOR(int n, int m, vector < int > & arr1, vector < int > & arr2) {
    for(int i=0;i<n;i++)
    {
        insert(arr1[i]);
    }
   int maxi=0;
     for (int i = 0; i < m; i++) {
    maxi = max(maxi, findmax(arr2[i]));
  }
  return maxi;
}
};


int main()
{

	  vector < int > arr1 = {6, 8};
  vector < int > arr2 = {7, 8, 2};
  int n = 2, m = 3;
  	Trie trie;
  cout << trie.maxXOR(n, m, arr1, arr2) << endl;
  return 0;

}
