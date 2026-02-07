#include<bits/stdc++.h>
using namespace std;

void traversal(unordered_map<int, list<int>> &adj, unordred_map<int, bool> &visited, vector<int> &component, int node){
    component.push_back(node);
    visited[node] = true;
    
    for(auto i: adj[node]){
        if(!visited[i]){
            traversal(adj, visited, component, i);
        }
    }
}
vector<vector<int> > DFS(int V, int E, vector<vector<int>> &edges){
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    vector<vector<int>> ans;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    
    

    //traversing all components of graph 
    for(int i=0; i<V; i++){
        if(!visited[i]){
            vector<int> component;
            traversal(adj, visited, component, i);
            ans.push_back(component);
        }
    }
    return ans;
}