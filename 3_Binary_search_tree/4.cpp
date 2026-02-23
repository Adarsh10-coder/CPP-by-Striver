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

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == NULL) return new TreeNode(val);
    TreeNode *cur = root;
    while(true){
        if(cur -> data <= val){
            if(cur -> right != NULL){
                cur = cur -> right;
            }
            else{
                cur -> right = new TreeNode(val);
                break;
            }
        }else{
            if(cur -> left != NULL){
                cur = cur -> left;
            }
            else{
                cur -> left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}

int main() {

    return 0;
}
