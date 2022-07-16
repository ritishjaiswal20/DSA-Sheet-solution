/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ism(TreeNode* l,TreeNode *r )
    {
      if(l==NULL && r==NULL) return true;
      if(l==NULL && r!=NULL) return false;
      if(l!=NULL && r==NULL) return false;
      if(l->val!=r->val) return false;
      return (ism(l->left,r->right) && ism(l->right,r->left));
      
    }
    bool isSymmetric(TreeNode* root) {
     return ism(root->left ,root->right); 

    }
};



class Solution {
public:
    bool issame(TreeNode*p,TreeNode* q)
    {
        if(p==NULL || q==NULL)
        {
            return p==q;
        }
        return (p->val==q->val) && issame(p->right,q->left) && issame(p->left,q->right);
    }
    bool isSymmetric(TreeNode* root) {
        return issame(root->left,root->right);
    }
};
