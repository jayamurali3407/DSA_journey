#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
private:
    int height(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int leftheight = height(root->left);
        int rightheight = height(root->right);

        int currentdiameter = leftheight + rightheight;

        int leftdiameter = diameterOfBinaryTree(root->left);
        int rightdiameter = diameterOfBinaryTree(root->right);

        return max(currentdiameter, max(leftdiameter, rightdiameter));
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution sol;
    cout << "Diameter of the bunary tree is : " << sol.diameterOfBinaryTree(root) << endl;

    return 0;
}