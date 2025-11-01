#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int burnTree(Node* root, map<Node*,Node*> &nodeToParent){
    map<Node*,bool> visited;
    queue<Node*> q;

    q.push(root);
    visited[root] = true;

    int ans = 0;
    while(!q.empty()){
        bool flag = 0;
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* frontNode = q.front();
            q.pop();

            if(frontNode->left && !visited[frontNode->left]){
                flag = 1;
                q.push(frontNode->left);
                visited[frontNode->left] = true;
            }
            if(frontNode->right && !visited[frontNode->right]){
                flag = 1;
                q.push(frontNode->right);
                visited[frontNode->right] = true;
            }
            if(nodeToParent[frontNode] && !visited[nodeToParent[frontNode]]){
                flag = 1;
                q.push(nodeToParent[frontNode]);
                visited[nodeToParent[frontNode]] = true;
            }
        }
    }
}
int minTime(Node* root, int target){
    int ans = 0;
    map<Node*,Node*> nodeToParent;
    Node* targetNode = createParentMapping(root,target,nodeToParent);

    burnTree(targetNode,nodeToParent);

    return ans;
}