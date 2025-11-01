#include <iostream>
using namespace std;

class Node {
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void morrisInorder(Node* root) {
    Node* curr = root;
    while(curr != NULL){    
        if(curr->left == NULL) {
            cout << curr->data << " ";
            curr = curr->right;
        } else {
            Node* pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
                pred = pred->right;
            if (pred->right == NULL){
                pred->right = curr;
                curr = curr->left;
            } else {
                pred->right = NULL;      
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}