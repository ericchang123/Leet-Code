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

    bool isBal(TreeNode* node, int& height){
        if(node == NULL){
            height = 0;
            return true;
        }
        int left, right;
        if(!isBal(node->left, left) || !isBal(node->right, right))
            return false;
        if(abs(left - right) <= 1){
            height = max(left, right) + 1;
            return true;
        }
        return false;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int l, r;
        if(!isBal(root->left, l) || !isBal(root->right, r))
            return false;
        if(abs(l - r) <= 1)
            return true;
        return false;
    }
};
