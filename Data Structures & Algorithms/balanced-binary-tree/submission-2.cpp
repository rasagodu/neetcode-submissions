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
    bool isBalanced(TreeNode* root) {
        int res =1;
        dfs(root , res);
        return res;
    }
private:
    int dfs(TreeNode* root, int& res){
        if(!root)return 0;
        int left = dfs(root -> left, res);
        int right = dfs(root -> right, res);
        int value = left - right;
        if(res!=0){
            if(value !=0 && value != 1 && value != -1) res =0;
        }
        return 1 + max(left,right);

    }
};