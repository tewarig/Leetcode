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
 Inorder Transversal and adding up all The number within range of L and R
 */
class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root) return 0;
        if(root->left)
            rangeSumBST(root->left,L,R);
        if(root->val>=L and root->val<=R)
        sum = sum + root->val;
        if(root->right)
            rangeSumBST(root->right,L,R);
        return sum;
            
    }
};
