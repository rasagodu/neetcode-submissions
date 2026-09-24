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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> values;
        int level =0;
        if(root){values.push(root);}
        while(values.size()>0){
            int length = values.size();
            for(int i =0; i< length; i++ ){
                TreeNode* curr = values.front();
                values.pop();
                if (curr -> left){
                    values.push(curr -> left);
                }
                if(curr -> right){
                    values.push(curr -> right);
                }
            }
            level ++;
        }
        return level;
    }
};
