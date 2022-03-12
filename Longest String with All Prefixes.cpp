#include <iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node
{
	struct Node* a[26];
	int flag=false;
};


class Trie {
	struct Node *root;
public:

Trie() 
{
    root=new Node();
}

void insert(string word) 
{
    struct Node *node=root;
    for(int i=0;i<word.size();i++)
    {
        if(node->a[word[i]-'a']==NULL)
        {
            node->a[word[i]-'a']=new Node();
        }
        node=node->a[word[i]-'a'];
    }
    node->flag=true;
}

bool search(string word) 
{
    struct Node *node=root;
    for(int i=0;i<word.size();i++)
    {
        if(node->a[word[i]-'a']==NULL)
            return false;
        else
        {
            node=node->a[word[i]-'a'];
        }
    }
    return node->flag;
}

bool startsWith(string word) 
{
    struct Node *node=root;
    for(int i=0;i<word.size();i++)
    {
        if(node->a[word[i]-'a']!=NULL)
            node=node->a[word[i]-'a'];
        else
            return false;
    }
    return true;
}

bool ispre(string s)
{
    Node* node=root;
    for(int i=0;i<s.size();i++)
    {
        if(node->a[s[i]-'a'])
        {
            node=node->a[s[i]-'a'];
            if(!node->flag)
            {
                return false;
            }
        }else
        {
            false;
        }
     
    }
       return node->flag;
}


string completeString(vector<string> s) {
    
      for(int i=0;i<s.size();i++)
      {
          insert(s[i]);
      }
      string longest="";
      for(int i=0;i<s.size();i++)
      {
          if(ispre(s[i]))
          {
              if(s[i].size()>longest.size())
              {
                  longest=s[i];
              }
              else if(s[i].size()==longest.size() && s[i]<longest)
              {
                  longest=s[i];
              }
          }
          
      }
      if(longest == "") return "None"; 
      return longest; 
      
      

  }
};


int main()
{

	vector<string>value = {"n", "ni", "nin", "ninj", "ninja","ninga"};
	Trie trie;
     cout<<trie.completeString(value);
    return 0;
}
