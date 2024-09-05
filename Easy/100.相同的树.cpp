/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 如果两棵树都为空，则它们相同
        if (p == nullptr && q == nullptr) {
            return true;
        }
        // 如果其中一棵树为空，另一棵树不为空，则它们不同
        if (p == nullptr || q == nullptr) {
            return false;
        }
        // 如果两棵树的根节点值不同，则它们不同
        if (p->val != q->val) {
            return false;
        }
        // 递归比较左右子树
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
// @lc code=end

