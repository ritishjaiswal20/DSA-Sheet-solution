/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
int flooor(BinaryTreeNode<int>* root,int fmax,int key)
{
	if(root==NULL)
	{
		return fmax;
	}
	if(root->data ==key){
		return root->data;
	}
	if(root->data>key){
			fmax=root->data;
		return flooor(root->left,fmax,key);
	}
	else{
		return flooor(root->right,fmax,key);
	}
	return fmax;
}
int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
	 return flooor(root,-1,x);
}
