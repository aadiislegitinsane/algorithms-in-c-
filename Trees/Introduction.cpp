#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    
    cout << "enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level traverse ho chuka hai 
            cout << endl;
            if(!q.empty()){
                //q got some child nodes
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);            
            }
        }
    }
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return NULL;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root){
    //base case 
    if(root == NULL){
        return NULL;
    }
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case 
    if(root == NULL){
        return NULL;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevlOrder(node* &root){
    queue<node*>q;

    cout << "enter the data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter the left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;
        
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "enter the right node for : " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}