/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    stack<pair<BinaryTreeNode*,int>>st;
	vector<int> pre,in,post;
	vector<vector<int>>ans;
	if(root==NULL)
	{
		return;
	}
	st.push({root,1});
	while(!st.empty())
	{
	    auto it=st.top();
		st.pop();
		if(it.second==1)
		{
			pre.push_back(it.first->data);
			it.second++;
			st.push(it);
		}
		else if(it.second==2)
		{
			in.push__back(it.first->data);
			it.second++;
			st.push(it);
		}
		else{
			 post.push(it.first->data);
			  
		}
	}
	
	ans.push_ack(st);
	
}





