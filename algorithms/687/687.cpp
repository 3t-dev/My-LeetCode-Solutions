/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    void findNode(TreeNode* node, int &max) {        
        if(node == NULL) return;
        int l = findSub(node, node->left, 0);
        int r = findSub(node, node->right, 0);
        
        int sum = l + r;        
        
        if(sum>max) max = sum;
        
        findNode(node->left, max);
        findNode(node->right, max);
    }
    
    int findSub(TreeNode* root, TreeNode* sub, int curr) {
        int val = root->val;
        if(sub == NULL) return curr;
        else {
            if(sub->val == val) {                
                ++ curr;
                int l = findSub(sub, sub->left, curr);
                int r = findSub(sub, sub->right, curr);                
                return max(l,r);
            } else {
                return curr;                
            }
        }
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(root == NULL) return 0;
        int max = 0;        
        findNode(root, max);
        
        return max;
    }
};