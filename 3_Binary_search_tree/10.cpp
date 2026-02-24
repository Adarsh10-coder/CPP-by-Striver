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

TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p){
    TreeNode *successor = NULL;
    while(root != NULL){
        if(p->data >= root->data){
            root = root -> right;
        }
        else{
            successor = root;
            root = root -> left;
        }
    }
    return successor;
}

int main() {
    
    return 0;
}
