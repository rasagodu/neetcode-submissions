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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // BFS solution
        queue<TreeNode*>  nodes;
        if(!p && !q) return true;
        else if((!p && q) || (p && !q)) return false;
        
       if(p && q){
            nodes.push(p);
            nodes.push(q);
       }
       while(nodes.size()>0){
            int length = nodes.size();
            for(int i =0; i<length/2;i++){
                TreeNode* curr = nodes.front();
                nodes.pop();
                TreeNode* curr2 = nodes.front();
                nodes.pop();
                if(!curr && !curr2)continue;
                if(!curr || !curr2 || curr -> val != curr2 ->val) return false;
                    nodes.push(curr->left);
                    nodes.push(curr2->left);
                    nodes.push(curr -> right);
                    nodes.push(curr2 -> right);

            }
       }
       return true;
       
    }

};
