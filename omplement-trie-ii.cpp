struct Node
{
	struct Node* a[26];
	int flag=false;
  int ew=0;
  int pf=0;
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
          node->pf++;
        }
        node=node->a[word[i]-'a'];
    }
    node->flag=true;
  node->ew++;
}
int countWordsEqualTo(String word) {
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
    return node->ew;
    }


int startsWith(string word) 
{
    struct Node *node=root;
    for(int i=0;i<word.size();i++)
    {
        if(node->a[word[i]-'a']!=NULL)
            node=node->a[word[i]-'a'];
        else
            return false;
    }
    return node->pf;
}
  void erase(String word) {
        Node* node = root;
        for(int i = 0;i<word.length();i++) {
            if(node->containsKey(word[i])) {
                node = node->get(word[i]);
                node->pf--; 
            }
            else {
                return;
            }
        }
        node->ew--; 
    }
    };
