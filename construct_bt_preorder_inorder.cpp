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

//preorder: current, left, right
//inorder: left, current, right

//traverse through the preorder, say that we are at node x, and our next input is y
//if the inorder position of y is to the left of x, then y is a left child of x
//otherwise, if the inorder position of y is to the left of x's parent, then y is a right child of x
//otherwise, y and x are not related

class Solution {
public:

    vi preO;
    vi inO;

    map<int, int> inOrderPos;

    int preO_pos = 1;

    TreeNode* root;

    void dfs(TreeNode* currentNode, TreeNode* parent){
        if(preO_pos >= preO.size()){
            return;
        }

        int nextValAdded = preO.at(preO_pos);

        if(inOrderPos.at(nextValAdded) < inOrderPos.at(currentNode->val)){
            //check if the inorder position of the next value added is smaller than the current
            currentNode->left = new TreeNode(nextValAdded);
            preO_pos++;
            dfs(currentNode->left, currentNode);
            //dfs into it to see whether the next element is a parent of the left child subtree or not, once the element
            //is not a part of the left child subtree, it will exit the dfs
        }

        if(preO_pos >= preO.size()){
            return;
        }
        nextValAdded = preO.at(preO_pos);

        if(parent == nullptr || inOrderPos.at(nextValAdded) < inOrderPos.at(parent->val) || inOrderPos.at(currentNode->val) > inOrderPos.at(parent->val)){
            //check if the inorder position of the next value added is larger than the current and smaller than the parent
            currentNode->right = new TreeNode(nextValAdded);
            preO_pos++;
            dfs(currentNode->right, currentNode);
        }

        //otherwise it's a case to be dealt with the parent if the parent is to the right of the node, otherwise, it if
        //a new right node

    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preO = preorder;
        inO = inorder;
        for(int i = 0; i < inorder.size(); i++){
            int currVal = inorder.at(i);
            inOrderPos[currVal] = i;
        }
        root = new TreeNode(preorder.at(0));
        dfs(root, nullptr);
        return root;
    }
};