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
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        stack<TreeNode*> stk;

        TreeNode* node = root;
        while (node != nullptr) {
            stk.push(node);
            node = node->right;
        }

        while (!stk.empty()) {
            node = stk.top();
            stk.pop();
            node->val += sum;
            sum= node->val;
            if (node->left != nullptr) {
                node = node->left;
                while (node != nullptr) {
                    stk.push(node);
                    node = node->right;
                }
            }
        }

        return root;
    }
};