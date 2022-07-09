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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map < int, map < int, multiset < int >>> mp;
  queue < pair <TreeNode * , pair < int, int >>> q;
  q.push({
    root,
    {
      0,
      0
    }
  }); //initial vertical and level
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    TreeNode * temp = p.first;

    //x -> vertical , y->level
    int vl = p.second.first, hl = p.second.second;
     mp[vl][hl].insert(temp -> val); //inserting to multiset

    if (temp -> left) {
      q.push({
        temp -> left,
        {
          vl - 1,
          hl + 1
        }
      });
    }
    if (temp -> right) {
      q.push({
        temp -> right,
        {
          vl + 1,
          hl+ 1
        }
      });
    }
  }
  vector < vector < int >> ans;
  for (auto p: mp) {
    vector < int > col;
    for (auto q: p.second) {
      col.insert(col.end(), q.second.begin(), q.second.end());
    }
    ans.push_back(col);
  }
  return ans; 
    }
};
