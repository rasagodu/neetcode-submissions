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
        queue<TreeNode*> tempV;
        vector<vector<int>> res={};
        if(root) tempV.push(root);
        
        int index = 0;
        while(tempV.size()>0){
            res.push_back({});
            int length = tempV.size();
            for(int i = 0; i < length; i++){
                TreeNode* curr = tempV.front();
                tempV.pop();
                res[index].push_back(curr -> val);
                if(curr -> left)tempV.push(curr -> left);
                if(curr -> right) tempV.push(curr -> right);
            }
            index++;
        }
        return res;
    }
};
