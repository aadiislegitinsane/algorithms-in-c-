#include <bits/stdc++.h>
using namespace std;

bool isCyclicBFS(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, int node){
    unordered_map<int, int> parent;
    parent[node] = -1;
    visited[node] = true;

    queue<int>q;
    q.push(node);
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto i: adj[frontNode]){
            if(visited[i] == true && parent[frontNode] != -1){
                return true;
            }
            if(visited[i] == false){
                visited[i] = true;
                parent[i] = frontNode;
                q.push(i);
            }
        }
    }
    return false;
}

string cycleDetectionBFS(vector<vector<int>> &edges, int n, int m){
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;

    //creating adjacency list 
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicBFS(adj, visited, i);
        
        if(ans){
            return "YES";
        }
    
    }
    }
    return "NO";
}