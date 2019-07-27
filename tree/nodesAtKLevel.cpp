#include <iostream>
#include <queue>

#include "node.cpp"

using namespace std;

void nodesAtKLevel(Node *root, int l){
    queue<Node *> q;
    // if (root == NULL)
    //     cout << "Empty tree";
    //     return;

    q.push(root);
    q.push(NULL);
    int level = 1;
    cout << "Nodes at level " << l << " are: ";

    while (q.empty() == false && level <= l)
    {
        Node *curr = q.front();
        q.pop();
        
        if (curr == NULL){
            level++;
            q.push(NULL);
        } else {
            if (level == l)
            {
                cout << curr->data << ", ";
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
    cout << endl;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    nodesAtKLevel(root, 5);
}