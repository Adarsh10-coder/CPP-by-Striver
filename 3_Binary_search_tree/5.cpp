#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

TreeNode* deleteNode(TreeNode* root, int key) {
    if(root == NULL) {
        return NULL;
    }
    if(root->data == key) {
        return helper(root);
    }
    TreeNode* dummy = root;
    while(root != NULL) {
        if(root->data > key) {
            if(root->left != NULL && root->left->data == key) {
                root->left = helper(root->left);
                break;
            }else{
                root = root->left;
            }
        }else{
            if(root->right != NULL && root->right->data == key) {
                root->right = helper(root->right);
                break;
            }else{
                root = root->right;
            }
        }
    }
    return dummy;
}

TreeNode* helper(TreeNode* root) {
    if(root->left == NULL) {
        return root->right;
    }
    else if(root->right == NULL) {
        return root->left;
    }
    TreeNode* rightChild = root->right;
    TreeNode* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;

    return root->left;
}

TreeNode* findLastRight(TreeNode* root) {
    if(root->right == NULL) {
        return root;
    }
    return findLastRight(root->right);
}

int main() {

    return 0;
}
