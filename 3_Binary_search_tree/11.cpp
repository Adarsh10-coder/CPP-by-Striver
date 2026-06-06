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

class Solution {
private:
    TreeNode* first;
    TreeNode* last;
    TreeNode* prev;
    TreeNode* middle;
private:
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root -> left);
        if(prev != NULL && (root -> data < prev -> data)){
            if(first == NULL){
                first = prev;
                middle = root;
            }
            else{
                last = root;
            }
        }
        prev = root;
        inorder(root -> right);
    }    
public:
    void recoverTree(TreeNode* root) {
        first = last = middle = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first -> data, last -> data);
        else if(first && middle) swap(first -> data, middle -> data);
    }
};

int main() {
    
    return 0;
}
