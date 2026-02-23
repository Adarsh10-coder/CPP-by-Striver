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

int findCeil(TreeNode *root, int key) {
    int ceil = -1;
    while(root){
        if(root -> data == key){
            ceil = root -> data;
            return ceil;
        }
        if(key > root->data){
            root = root -> right;
        }
        else{
            ceil = root -> data;
            root = root -> left;
        }
    }
    return ceil;
}

int main() {

    return 0;
}
