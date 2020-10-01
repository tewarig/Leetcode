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
 /* Logic Behind The Solution
 We use the In order Transversal , as we know  ( and considering ) all Elements during in order transversal are In Ascending Order , So we Store each value in an array and Check if its strictly ascending */
class Solution {
public:
    vector <int> c;
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        if(root->left)
            bool ck = isValidBST(root->left);
        c.push_back(root->val);
        if(root->right)
          bool ck = isValidBST(root->right);
        for(int i=1;i<c.size();i++)
        {
            if(c[i]<=c[i-1])
                return false;
        }
         return true;
    }
};
