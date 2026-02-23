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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        int curr = root -> data;
        if(curr < p->data && curr < q->data){
            return lowestCommonAncestor(root -> right, p, q);
        }
        if(curr > p->data && curr > q->data){
            return lowestCommonAncestor(root -> left, p, q);
        }
        return root;
}

int main() {
    
    return 0;
}
