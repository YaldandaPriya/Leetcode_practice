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
    vector<TreeNode*>inOrder_traversal;
    void inOrderTree(TreeNode* root){
        if(!root)return;
        inOrderTree(root->left);
        inOrder_traversal.push_back(root);
        inOrderTree(root->right);
    }
    TreeNode* balanced(int start,int end){
        if(start>end)return NULL;
        int mid=(start+end)/2;
        TreeNode* root=inOrder_traversal[mid];
        root->left=balanced(start,mid-1);
        root->right=balanced(mid+1,end);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inOrderTree(root);
        return balanced(0,inOrder_traversal.size()-1);
        
    }
};