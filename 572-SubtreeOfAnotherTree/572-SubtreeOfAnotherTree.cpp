// Last updated: 17/08/2025, 20:26:07
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
    void matchNode(TreeNode* root, TreeNode* subRoot, vector<TreeNode*>& matchedNodes) {
        if (root == nullptr) return;
        if (root->val == subRoot->val) matchedNodes.push_back(root);
        matchNode(root->left,subRoot,matchedNodes);
        matchNode(root->right,subRoot,matchedNodes);
    }
    bool nodesMatch(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr ^ subRoot == nullptr) return false;
        if (root==subRoot) return true;
        return root->val == subRoot->val && nodesMatch(root->left,subRoot->left) && nodesMatch(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool truth = false;
        vector<TreeNode*> matchedNodes;
        matchNode(root,subRoot,matchedNodes);
        for (TreeNode* n : matchedNodes) {
            truth = truth || nodesMatch(n,subRoot);
        }
        return truth;
    }
};