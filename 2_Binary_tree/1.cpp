#include <bits/stdc++.h>
using namespace std;

//! A struct groups related data together into a single type representing one tree node.
//! Using pointers lets nodes link to other nodes to form the tree structure
struct node {
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data = val;
        left = right = NULL;
        // A constructor that runs when you create a node with an integer. 
        // It initializes the data and sets the two child pointers to NULL.
    }
};

int main() {
    struct node * root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
   // The code does not print anything by itself — it only 
   // builds the structure. To see output you must traverse and print nodes.
    return 0;
}
