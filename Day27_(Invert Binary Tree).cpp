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
    private:
    void invertBinaryTree(TreeNode *root)
{ 
  if (root == nullptr)
  {
    return;
  }
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty())
  {
    TreeNode *curr = q.front();
    q.pop();
    swap(curr->left, curr->right);

    if (curr->left)
    {
      q.push(curr->left);
    }

    if (curr->right)
    {
      q.push(curr->right);
    }
  }
}
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
         invertBinaryTree(root);
         return root;

    }
};