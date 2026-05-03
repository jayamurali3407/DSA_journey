#include <bits/stdc++.h>
using namespace std;

// Defination of a tree node
struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Function to insert a node in BST
node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    // if value is smaller, go left
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }

    // if value if greater, go right
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

// Inorder traversal(left, root, right)
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = NULL;
    int x;

    cout << "Enter the elements for BST(-1 to stop)" << endl;

    // Read input until -1
    while (cin >> x && x != -1)
    {
        root = insert(root, x);
    }

    // Print Inorder traversal
    cout << "Inorder Traversal : " << endl;
    inorder(root);
    return 0;
}