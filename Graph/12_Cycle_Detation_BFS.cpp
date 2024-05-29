// link - https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


// Detect cycle in an undirected graph using BFS
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool BFS(int vertex, vector<int>adj[], vector<bool>visited){
        queue<pair<int,int>>q;
        visited[vertex]=1;
        q.push(make_pair(vertex, -1)); // node, parent
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(int j=0; j<adj[node].size(); j++){
                if(parent==adj[node][j]) continue;
                if(visited[adj[node][j]]) return 1;
                visited[adj[node][j]]==1;
                q.push(make_pair(adj[node][j], node));
                
                
            }
        }
        return 0;
        
        
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V, 0);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(BFS(i, adj, visited)) return 1;
            }
        }
        return 0;
    }
};