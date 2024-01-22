//
// Created by 孙志远 on 2024/1/6.
//

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
};

#include "iostream"
using namespace std;
#include <algorithm>

class DiameterOfBinaryTree {
public:
    int max = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(getLen(root->left)+ getLen(root->right)>max){
            max = getLen(root->left)+ getLen(root->right);
        }
        if(root->right!= nullptr){
            diameterOfBinaryTree(root->right);
        }
        if(root->left!= nullptr){
            diameterOfBinaryTree(root->left);
        }
        return max;
    }
    int getLen(TreeNode* root){
        if(root== nullptr){
            return 0;
        } else {
            int a = getLen(root->right);
            int b = getLen(root->left);
            return std::max(a,b)+1;
        }
    }
};