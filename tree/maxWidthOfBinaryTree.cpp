#include <iostream>
#include <queue>

#include "node.cpp"

using namespace std;

int maxWidth(Node *root){
    queue<Node *> q;

    q.push(root);
    int maxWidth = 0;
    while (q.empty() == false){
        int count = q.size();
        if (count > maxWidth)
            maxWidth = count;
        for (int i = 0; i < count; i++){
            Node *currNode = q.front();
            q.pop();
            if (currNode->left){
                q.push(currNode->left);
            }
            if (currNode->right){
                q.push(currNode->right);
            }
        }
    }
    cout << "max width: " << maxWidth;
    return maxWidth;
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right = new Node(20);
    root->right->left =  new Node(15);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);

    maxWidth(root);
}