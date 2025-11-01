#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        root = new Node(data);
        return root;
    }

    if(data > root->data) {
        root->right = insertIntoBST(root->right, data);
    } else {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void takeinput(Node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }

    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()) {
        Node* FrontNode = Q.front();
        Q.pop();

        if(FrontNode == NULL) {
            cout << endl;
            
            if(!Q.empty()) {
                Q.push(NULL);
            }
        } else {
            cout << FrontNode->data << " ";

            if(FrontNode->left) {
                Q.push(FrontNode->left);
            }

            if(FrontNode->right) {
                Q.push(FrontNode->right);
            }
        }
    }
}

Node* searchNode(Node* root, int key) {
    return (root == NULL || root->data == key) ? root : ((root->data > key) ? searchNode(root->left, key) : searchNode(root->right, key));
}

int kthSmallest(Node* root,int &K){
    if(root == NULL){
        return -1;
    }

    int left = kthSmallest(root->left, K);

    if(left != -1){
        return left;
    }
    K--;
    if(K==0){
        return root->data;
    }
    return kthSmallest(root->right, K);
}
int main() {
    Node* root = NULL;
    int K, ans;

    cout << "Enter data to create BST : ";
    takeinput(root);

    cout << "Enter the value of K : ";
    cin >> K;

    cout << endl << "Level Order Traversal : " << endl;
    levelOrderTraversal(root);

    int index = 0;
    ans = kthSmallest(root, index, K);

    cout << "Required answer = " << ans << endl;
    return 0;
}