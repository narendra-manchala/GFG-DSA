#include <iostream>

#include "node.cpp"

using namespace std;

int height(Node *root){
    if (root == NULL)
        return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    // cout << lheight << ", " << rheight<<endl;
    return max(lheight, rheight)+1;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    cout << height(root) <<endl;
}