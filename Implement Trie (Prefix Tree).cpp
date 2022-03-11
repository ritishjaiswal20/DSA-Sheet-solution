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
