#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

bool search(TreeNode* root, int key) {
    if (root == NULL)
        return false;

    if (root->val == key)
        return true;

    if (key < root->val)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    TreeNode* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key = 60;

    if (search(root, key))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}