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
    void helper(TreeNode* root,string  s,vector<string> &ans){
        if(root==NULL) return;
        string num = to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s += num;
            ans.push_back(s);
            return;
        }
        helper(root->left,s+num+"->",ans);
        helper(root->right,s+num+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};