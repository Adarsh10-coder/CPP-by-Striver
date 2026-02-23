#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    struct TreeNode * left;
    struct TreeNode * right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            //todo--> size tells how many nodes exist at this level.
            //todo--> level stores values of all nodes in this level
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                //! Take nodes one by one from the queue
                if(node -> left != nullptr) q.push(node -> left);
                if(node -> right != nullptr) q.push(node -> right);
                //! Agar left child hai → queue me daal do
                //! Agar right child hai → queue me daal do
                //! Ye next level ke nodes hain.
                level.push_back(node -> data);
            }
            ans.push_back(level);
        }
        return ans;
    }

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    auto ans = levelOrder(root);
    for (const auto &lvl : ans) {
        for (int v : lvl) cout << v << ' ';
        cout << '\n';
    }
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
