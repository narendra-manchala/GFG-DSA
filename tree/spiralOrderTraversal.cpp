#include <iostream>
#include <queue>

#include "node.cpp"

using namespace std;

void spiralOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    bool leftPush = false;
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL){
            leftPush = !leftPush;
            cout <<"\n";
            if (q.empty() == false)
                q.push(NULL);
            
        }else{
            cout << curr->data << " ";
            if (leftPush)
            {
                if (curr->left)
                {
                    q.push(curr->left);
                }
                if (curr->right)
                {
                    q.push(curr->right);
                }
            }
            else
            {
                if (curr->right)
                {
                    q.push(curr->right);
                }
                if (curr->left)
                {
                    q.push(curr->left);
                }
            }
        }
        
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // root->right->right->left = new Node(7);
    spiralOrderTraversal(root);
}