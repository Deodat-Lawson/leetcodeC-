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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> lastElement;
        if(root == nullptr){
            return lastElement;
        }

        vector<int> currentOrder;
        vector<TreeNode*> currentOrderNodes;
        currentOrderNodes.push_back(root);
        currentOrder.push_back(root->val);

        while(!currentOrderNodes.empty()){
            vector<int> newOrder;
            vector<TreeNode*> newOrderNodes;
            for (TreeNode* cElement : currentOrderNodes){
                if(cElement->left != nullptr){
                    newOrderNodes.push_back(cElement->left);
                    newOrder.push_back(cElement->left->val);
                }
                if(cElement->right != nullptr){
                    newOrderNodes.push_back(cElement->right);
                    newOrder.push_back(cElement->right->val);
                }
            }
            lastElement.push_back(currentOrder.at(currentOrder.size()-1));
            currentOrder = newOrder;
            currentOrderNodes = newOrderNodes;
        }

        return lastElement;
    }
};