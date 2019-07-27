#include <iostream>
#include <queue>

#include "treeTraversal.cpp"

using namespace std;

void insert(Node *root, int val){
    Node *newNode = new Node(8);
    cout << "\n" << newNode->data << " " << newNode->right  << " "<< newNode->left << endl;
    queue<Node *> q;
    q.push(root);
    while (!q.empty()){
        Node *curr = q.front();
        q.pop();
        if (!curr->left){
            curr->left = newNode;
            cout << "\n Inserted to the left of node: " << curr->data << endl;
            break;
        } else {
            q.push(curr->left);
        } 
        
        if (!curr->right) {
            curr->right = newNode;
            cout << "Inserted to the right of node: " << curr->data << endl;
            break;
        } else {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    levelOrder(root);

    insert(root, 8);

    levelOrder(root);

    return 0;
}