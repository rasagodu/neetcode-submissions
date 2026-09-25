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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        int minv = min(p->val,q->val);
        int maxv = max(p->val,q->val);
        if(root -> val < minv) return lowestCommonAncestor(root -> right , p ,q);
        else if( root -> val > maxv) return lowestCommonAncestor(root -> left, p,q);
        else if( root -> val > minv && root -> val < maxv) return root;
        
        if(root == p) return p;
        return q;
    }
};
