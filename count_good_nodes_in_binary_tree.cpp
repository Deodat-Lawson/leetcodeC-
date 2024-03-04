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

class Solution {

public:
    int count = 0;

    void checkGood(TreeNode* current, int max){
        max = std::max(max, current->val);
        if(current->val >= max){
            count++;
        }
        if(current->left != nullptr){
            checkGood(current->left, max);
        }
        if(current->right != nullptr){
            checkGood(current->right, max);
        }
    }

    int goodNodes(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        checkGood(root, root->val);
        return count;
    }

};