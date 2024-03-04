//
// Created by Timothy Lin on 3/4/24.
//

#include "template.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;

}

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

    bool checkEqual(TreeNode* a, TreeNode* b){
        if(a == nullptr && b == nullptr){
            return true;
        }
        if(a == nullptr || b == nullptr){
            return false;
        }

        bool right = checkEqual(a->right, b->right);
        bool left = checkEqual(a->left, b->left);
        bool current = (a->val == b->val);
        return right && left && current;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr){
            return true;
        }
        if(root == nullptr || subRoot == nullptr){
            return false;
        }
        bool check = false;
        if(root->val == subRoot->val){
            check = check || checkEqual(root, subRoot);
        }
        if(!check) {
            if (root->left != nullptr) {
                check = check || isSubtree(root->left, subRoot);
            }
            if(root->right != nullptr){
                check = check || isSubtree(root->right, subRoot);
            }
        }
        return check;
    }

};
