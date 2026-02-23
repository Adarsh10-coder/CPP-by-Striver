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

TreeNode* searchBST(TreeNode * root, int val) {
    // while(root != NULL && root -> data != val){
    //     root = val < root -> data ? root -> left: root -> right;
    // }
    // return root;

    if (root == NULL || root -> data == val){
        return root;
    }
    if (val < root->data){
        return searchBST(root->left, val);
    }
    else {
        return searchBST(root->right, val);
    }
}

int main() {

    return 0;
}
