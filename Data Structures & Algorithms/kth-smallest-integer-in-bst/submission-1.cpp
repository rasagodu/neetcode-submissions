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
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        int val = 0;
        int p =k;
        dfs(root, p, val);
        return val;
    }
private:
    void dfs(TreeNode* root, int& p, int& val){
        if(!root) return;
        dfs(root -> left, p, val);
        p--;
        if(p==0) {val = root ->val;
          return;}
        dfs(root ->right, p,val);
    }
};
