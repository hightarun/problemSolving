#include <iostream>
#include <vector>
#include <queue>
#include <stack>

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

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;

    if (root == nullptr)
        return res;

    queue<Node *> Q;
    stack<Node *> S;

    Q.push(root);

    Node *curr = nullptr;

    while (!Q.empty())
    {
        curr = Q.front();
        Q.pop();
        S.push(curr);

        if (curr->right)
        {
            Q.push(curr->right);
        }
        if (curr->left)
        {
            Q.push(curr->left);
        }
    }

    while (!S.empty())
    {
        res.push_back(S.top()->data);
        S.pop();
    }

    return res;
}
