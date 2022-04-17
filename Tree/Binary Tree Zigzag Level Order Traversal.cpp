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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>>ans;
          if(root==NULL)
           {
              return ans; 
           }
           queue<TreeNode*>q;
           q.push(root);
           int flag=1;
           while(!q.empty()) 
           {
               int size=q.size();
               vector<int> row(size);
               
               for(int i=0;i<size;i++)
               {
                   int index=flag?i:(size-i-1);
                   TreeNode*s=q.front();
                   q.pop();
                   row[index]=s->val;
                   if(s->left)
                   {
                       q.push(s->left);
                   }
                   if(s->right)
                   {
                       q.push(s->right);
                   }
                   
               }
               ans.push_back(row);
               flag= !flag;
           }
        return ans;
    }
};






