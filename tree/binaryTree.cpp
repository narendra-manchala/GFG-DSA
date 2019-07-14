#include <iostream>
#include <queue>

using namespace std;

struct Node{
    int data;
    Node* right, *left;
    Node (int x){
        data = x;
        left = right = NULL;
    }
};

void inOrder(Node *root){
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data <<",";
    inOrder(root->right);
}

void preOrder(Node *root){
    if (root == NULL)
        return;
    cout << root->data <<",";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root){
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<",";
}

void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        Node *node = q.front();
        q.pop();
        cout << node->data << ", ";
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }

}

void levelOrderPrintByLevel1(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.empty() == false){
        Node *node = q.front();
        q.pop();
        if (node == NULL){
            cout << "\n";
            if (q.empty() == false)
                q.push(NULL);
        } else {
        cout << node->data << " ";
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
        }
    }
}

void levelOrderPrintByLevel2(Node *root){
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for (int i = 0; i < count; i++){
            Node *currNode = q.front();
            q.pop();
            cout << currNode -> data << " ";
            if (currNode->left)
                q.push(currNode->left);
            if(currNode->right)
                q.push(currNode->right);
        }
        cout << "\n";
    }
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