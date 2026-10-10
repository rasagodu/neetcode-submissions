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
    bool isValidBST(TreeNode* root) {
         if(!root) return true;
        int lower = INT_MIN;
        int upper = INT_MAX;
        bool res = dfs(root, lower, upper);
        return res;
    }

private:
    bool dfs(TreeNode* root, int lower, int upper){
        if(!root) return true;
        bool ans = false;
        if(root -> val > lower & root -> val < upper){
            ans = dfs(root -> left, lower, root -> val) && dfs( root -> right, root -> val, upper);
        }
        return ans;
        
        
    }
};
