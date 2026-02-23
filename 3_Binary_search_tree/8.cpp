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

TreeNode* build(vector<int>& A, int& i, int bound){
    if(i == A.size() || A[i] > bound) return NULL;
    TreeNode* root = new TreeNode(A[i++]);
    root -> left = build(A, i, root -> data);
    root -> right = build(A, i, bound);
    return root;
}
TreeNode* bstFromPreorder(vector<int>& A){
    int i = 0;
    return build(A, i, INT_MAX);
}

int main() {
    
    return 0;
}
