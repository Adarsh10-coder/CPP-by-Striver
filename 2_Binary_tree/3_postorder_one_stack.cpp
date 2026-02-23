#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    struct TreeNode * left;
    struct TreeNode * right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
vector<int>postOrder_1stack(TreeNode* root) {
    vector<int> ans;
    stack<TreeNode*> st;
    while (true) { // Ye loop tab tak chalta rahega jab tak stack empty na ho jaye
        while (root) {
            st.push(root);
            st.push(root);
            //! First push → marker that node is visited first time
            //! Second push → tells us both subtrees are done, now process root
            root = root->left;
        }
        if (st.empty()) return ans;
        root = st.top();
        st.pop();
        if (!st.empty() && st.top() == root){
            root = root->right;
            //! If the same node is still on top, this means:
            //! Left subtree is done
            //! Right subtree is NOT done
        }
        else {
            ans.push_back(root->data);
            root = nullptr;
            // This means:
            // Left subtree ✔
            // Right subtree ✔
            // Now process root
        }
    }
    return ans;
    }

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> postOrderList = postOrder_1stack(root);
    for (auto it : postOrderList){
        cout << it << " ";   
    } 
    return 0;
}
