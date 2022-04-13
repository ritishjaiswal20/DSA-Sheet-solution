id left(Node* root,int level,vector<int>&a )
{
    if(root==NULL)
    {
        return;
    }
    if(a.size()==level)
    {
        a.push_back(root->data);
    }
    left(root->left,level+1,a);
    left(root->right,level+1,a);
    return;
}
vector<int> leftView(Node *root)
{
    vector<int>a;
    left(root,0,a);
    return a;
}
