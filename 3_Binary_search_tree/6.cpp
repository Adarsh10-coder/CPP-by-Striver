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
public:
    bool isValidBST(TreeNode* root){
        return validate(root, LONG_MIN, LONG_MAX);
    }

private:
    bool validate(TreeNode* root, long minVal, long maxVal){
        if(root == NULL){
            return true;
        }
        if(root->data <= minVal || root->data >= maxVal){
            return false;
        }
        return validate(root->left, minVal, root->data) &&
               validate(root->right, root->data, maxVal);
    }
};

int main() {
    /*
            5
           / \
          3   7
         / \   \
        2   4   8
    */

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);

    Solution obj;

    if (obj.isValidBST(root))
        cout << "Valid BST" << endl;
    else
        cout << "Not a Valid BST" << endl;

    return 0;
}
