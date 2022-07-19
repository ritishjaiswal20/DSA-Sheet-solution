int floorInBST(TreeNode<int> * p, int x)
{
    // Write your code here.
    int pre=-1;
    while(p)
    {
        if(p->val==x)
        {
            return x;
   
        }
        else {
        if(p->val<x)
        {
            pre=p->val;
            p=p->right;
        }
        else
        {
            p=p->left;
        }
        }
    }
    return pre;
}
