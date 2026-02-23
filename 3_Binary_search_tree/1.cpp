#include <bits/stdc++.h>
using namespace std;

//! Binary Search Tree (BST) Node Structure
//! A BST is a tree where: left child < parent < right child
struct node {
    int data;
    struct node * left;
    struct node * right;
    
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

//! Insert a value into the BST
struct node * insert(struct node * root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

//! Search for a value in the BST
bool search(struct node * root, int val) {
    if (root == NULL) {
        return false;
    }
    
    if (root->data == val) {
        return true;
    } else if (val < root->data) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

//! Inorder traversal (Left, Root, Right) - prints values in sorted order
void inorder(struct node * root) {
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    struct node * root = NULL;
    
    //! Insert values into BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    
    //! Print inorder traversal
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    
    //! Search examples
    cout << "Search 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;
    cout << "Search 25: " << (search(root, 25) ? "Found" : "Not Found") << endl;
    
    return 0;
}
