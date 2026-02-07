#include<bits/stdc++.h>
using namespace std;

void traversal(unordered_map<int, list<int>> &adj, unordred_map<int, bool> &visited, vector<int> &answer, int node){
    queue<int>q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        visited[frontNode] = true;
        answer.push_back(frontNode);

        for(auto i: adj[frontNode]){
            if(!visited[i]){
                q.push(i);
            }
        }
    }
}

vector<int> bfsTraversal(int vertex, vector<vector<int>> &edges){
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    vector<int> answer;

    //creating adjacency list 
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //traversing all components of graph

    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            traversal(adj, visited, answer, i);
        }
    }
    return answer;
}