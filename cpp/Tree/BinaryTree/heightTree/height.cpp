#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(struct Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int lheight = height(root->left);
        int rheight = height(root->right);

        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
