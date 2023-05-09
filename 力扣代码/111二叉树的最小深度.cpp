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
    int MAX=1000005;
    int minDe(TreeNode* root){
        if(root == nullptr){
            return 0;
        }else if(root != nullptr&&root->left==nullptr&&root->right==nullptr){
            return 1;
        }
        int m=MAX;
        if(root->left!=nullptr){
            m = min(minDe(root->left), m);
        }
        if(root->right!=nullptr){
            m = min(minDe(root->right), m);
        }
        return m+1;
    }
    int minDepth(TreeNode* root) {
        return minDe(root);
    }
};
