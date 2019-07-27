#include <iostream>
#include <queue>

#include "treeTraversal.cpp"

using namespace std;


int main(){
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right = new Node(20);
    root->right->left =  new Node(15);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);
    root->left->left->left = new Node(8);

    cout << "Inorder: ";
    inOrder(root);
    cout <<endl;
    cout << "Preorder: ";
    preOrder(root);
    cout <<endl;
    cout << "Postorder: ";
    postOrder(root);
    cout <<endl;
    cout << "Level order: ";
    levelOrder(root);
    cout <<endl;
    levelOrderPrintByLevel1(root);
    cout <<endl;
    levelOrderPrintByLevel2(root);
}