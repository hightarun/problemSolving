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

class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        vector<int> result;

        if (node == NULL)
        {
            return result;
        }

        queue<Node *> q;
        q.push(node);

        while (!q.empty())
        {
            Node *current = q.front();
            result.push_back(current->data);
            q.pop();

            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
        }
        return result;
    }
};