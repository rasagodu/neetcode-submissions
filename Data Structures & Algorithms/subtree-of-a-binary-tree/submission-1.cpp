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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(root ->val == subRoot -> val) {
            bool res = isSametree(root, subRoot);
            if(res ==1) return true; 
            }
        bool left = isSubtree(root -> left, subRoot);
        bool right = isSubtree(root -> right, subRoot);
        return left || right;

    }
private:
    bool isSametree(TreeNode* root, TreeNode* subRoot){
        if(!root && subRoot || root && !subRoot) return false;
        if(  !subRoot && !root) return true;
        if(root -> val == subRoot -> val){
            return isSametree(root -> left, subRoot -> left) && isSametree(root -> right, subRoot -> right);
        }
        return false;
        
    }
};
