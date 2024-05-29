// link - https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// Detect cycle in an undirected graph using DFS
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    
    bool CycleDetect(int node, int parent, vector<int>adj[], vector<bool>&visited){
        visited[node] = 1;
        for(int j=0; j<adj[node].size(); j++)
        {
            if(parent == adj[node][j]) continue;
            if(visited[adj[node][j]]) return 1;
            if(CycleDetect(adj[node][j], node, adj, visited)) return 1;
        }
        return 0;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,0);
        
        // visit all the unvisted node code for which is disconnected 
        for (int i=0; i<V; i++)
        {
            if(!visited[i])
            {
              if(CycleDetect(i, -1, adj, visited)) return 1;
            }
        }
        return 0;
        
       // return CycleDetect(0, -1, adj, visited); // for first node
    }
};