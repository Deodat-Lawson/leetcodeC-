////
//// Created by Timothy Lin on 3/4/24.
////
//
//#include "template.h"
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//class Solution {
//public:
//    TreeNode** dp;
//
//
//
//    int size(TreeNode* curr){
//        int left = 0;
//        int right = 0;
//        if(curr->left != nullptr){
//            left = size(curr->left);
//        }
//        if(curr->right != nullptr){
//            right = size(curr->right);
//        }
//        return left + right + 1;
//    }
//
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        int rootSize = size(root);
//        int rootLog = (int) (log(rootSize)/ log(2)) + 1;
//        dp = new TreeNode[rootSize][rootLog];
//
//    }
//};
