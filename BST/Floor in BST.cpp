/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int flooor(TreeNode<int>* root,int fmax,int key)
{
	if(root==NULL)
	{
		return fmax;
	}
	if(root->val ==key){
		return root->val;
	}
	if(root->val>key){
		return flooor(root->left,fmax,key);
	}
	else{
		fmax=root->val;
		return flooor(root->right,fmax,key);
	}
	return fmax;
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    return flooor(root,-1,X);
}
