//
// Created by timot on 3/5/2024.
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

//inorder traversal, find the kth element in the traversal

class Solution {
public:


    vector<int> inOrderTraversal;

    void inOrder(TreeNode* current){
        if(current->left != nullptr){
            inOrder(current->left);
        }
        inOrderTraversal.push_back(current->val);
        if(current->right != nullptr){
            inOrder(current->right);
        }
    }



    int kthSmallest(TreeNode* root, int k) {
        inOrder(root);
        return inOrderTraversal.at(k-1);
    }
};