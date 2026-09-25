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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> tempV;
        if(!root) return {};
        tempV.push(root);
        while(!tempV.empty()){
            int length = tempV.size();
            for(int i = 0; i< length; i++){
                TreeNode* curr = tempV.front();
                tempV.pop();
                if(i == length -1)res.push_back(curr -> val);
                if(curr -> left) tempV.push(curr -> left);
                if(curr -> right) tempV.push(curr -> right);

            }
        }
        return res;
    }
};
