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

int findFloor(TreeNode*root, int key) {
    int floor = -1;
    while(root){
        if(root -> data == key){
            floor = root -> data;
            return floor;
        }
        if(key > root->data){
            floor = root -> data;
            root = root -> right;
        }
        else{
            root = root -> left;
        }
    }
    return floor;
}

int main() {

    return 0;
}
