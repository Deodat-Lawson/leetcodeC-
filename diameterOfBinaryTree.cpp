//
// Created by timot on 2/20/2024.
//
#include <bits/stdc++.h>
using namespace std;

// Fast input/output
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// Frequently used macros
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

// Debugging
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

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
    int maxL = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        if(root != nullptr){
            sizeF(root);
        }
        return maxL;
    }

    int sizeF(TreeNode* current){
        int left = 0;
        int right = 0;
        if(current->left != nullptr){
            left = sizeF(current->left) + 1;
        }
        if(current->right != nullptr){
            right = sizeF(current->right) + 1;
        }

        maxL = max(maxL, left + right);
        return max(left, right);
    }
};