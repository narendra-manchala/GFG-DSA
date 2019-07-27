#include <iostream>
#include <queue>

#include "node.cpp"

using namespace std;

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    
    while (!q.empty())
    {
        cout << "not empty " << q.size() << endl;
        Node *node = q.front();
        q.pop();
        cout << node->data << ", ";
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
    cout << "is empty";
}

void levelOrderPrintByLevel1(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.empty() == false)
    {
        Node *node = q.front();
        q.pop();
        if (node == NULL)
        {
            cout << "\n";
            if (q.empty() == false)
                q.push(NULL);
        }
        else
        {
            cout << node->data << " ";
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
    }
}

void levelOrderPrintByLevel2(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *currNode = q.front();
            q.pop();
            cout << currNode->data << " ";
            if (currNode->left)
                q.push(currNode->left);
            if (currNode->right)
                q.push(currNode->right);
        }
        cout << "\n";
    }
}