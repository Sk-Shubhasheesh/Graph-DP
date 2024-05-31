
// link - https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// Detect cycle in a directed graph using DFS

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to detect cycle in a directed graph.
    bool DetectCycle(int node, vector<int> adj[], vector<bool>& path, vector<bool>& visited) {
        visited[node] = 1;
        path[node] = 1;
        
        for (int j = 0; j < adj[node].size(); j++) {
            // if neighbour node is already present in my path then cycle is present
            if (path[adj[node][j]]) return 1;
            
            // optimize code if neighbour is already visited and not find cycle then we never go again that path
            if (visited[adj[node][j]]) continue;
            
            if (!visited[adj[node][j]] && DetectCycle(adj[node][j], adj, path, visited)) return 1;
        }
        path[node] = 0;
        return 0;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> path(V, 0);
        vector<bool> visited(V, 0);
        
        for (int i = 0; i < V; i++) {
            if (!visited[i] && DetectCycle(i, adj, path, visited)) return 1;
        }
        return 0;
    }
};