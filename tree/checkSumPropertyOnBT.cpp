#include <iostream>

#include "node.cpp"

using namespace std;

bool checkSum(Node *root){
    if (root == NULL){
        return true;
    }
    if (root->left == NULL && root->right == NULL){
        return true;
    }
    int sum = 0;
}