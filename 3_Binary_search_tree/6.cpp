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

void inorder(TreeNode* root, int k, int &count, int &result) {
    if(root == NULL) return;
    inorder(root->left, k, count, result);
    count++;
    if(count == k){
        result = root->data;
        return;
    }
    inorder(root->right, k, count, result);
}

int kthSmallest(TreeNode* root, int k) {
    int count = 0;
    int result = -1;
    inorder(root, k, count, result);
    return result;
}

int main() {
    
    return 0;
}
