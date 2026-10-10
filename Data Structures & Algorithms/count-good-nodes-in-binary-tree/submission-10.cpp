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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int maxVal = root -> val;
        int res = 0;
        dfs(root, maxVal, res);
        return res;
    }
private:
    void dfs(TreeNode* root, int& maxVal, int& res){
        if(!root) return;
        
        if(root -> val >= maxVal){
            res++;
            maxVal = root -> val;
        }
        int max1 = maxVal;
        dfs(root -> left, maxVal, res);
        if(root ->val>=maxVal)maxVal = root -> val;
        dfs(root -> right, max1, res);
    }
};
