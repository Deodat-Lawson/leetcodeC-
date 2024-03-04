//
// Created by Timothy Lin on 3/4/24.
//

#include "template.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*
 * for each node, their value must be smaller than the smallest value on the right
 * for each node, their value must be larger than the largest value on the left
 */

class Solution {
public:

    bool isValid = true;
    void dfs(TreeNode* current, ll upper_limit, ll lower_limit){
        if(!isValid){
            return;
        }
        if( (ll) current->val >= upper_limit || (ll) current->val <= lower_limit){
            isValid = false;
        }
        if(current->left != nullptr){
            dfs(current->left, min(upper_limit, (ll) current->val), lower_limit);
        }
        if(current->right != nullptr){
            dfs(current->right, upper_limit, max(lower_limit, (ll) current->val));
        }
    }

    bool isValidBST(TreeNode* root) {
        if(root == nullptr)
        {
            return true;
        }
        dfs(root, INT64_MAX, INT64_MIN);
        return isValid;
    }


};