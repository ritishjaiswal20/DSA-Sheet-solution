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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        vector<int>b;
        if(root==NULL){
            return ans;
        }
        b.push_back(root->val);
        ans.push_back(b);
        while(!q.empty())
        {
            vector<int>a;
            int n=q.size();
            for(int i=0;i<n;i++)
            { 
             TreeNode* p=q.front();
             q.pop();
             if(p->left){
                 a.push_back(p->left->val);
                 q.push(p->left);
             }
             if(p->right)
             {
                 a.push_back(p->right->val);
                 q.push(p->right);
                 
             }
            }
            if(a.size()!=0){
            ans.push_back(a);}
        }
        return ans;
        
    }
};
