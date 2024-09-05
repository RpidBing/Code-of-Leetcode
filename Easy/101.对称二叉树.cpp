/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
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
    bool traversal(TreeNode* l,TreeNode* r){
        if(l == nullptr && r == nullptr)return true;
        if(l == nullptr || r == nullptr)return false;
        return (l->val == r->val) && traversal(l->left, r->right) && traversal(l->right, r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)return true;
        return traversal(root->left, root->right);
    }
};
// @lc code=end

