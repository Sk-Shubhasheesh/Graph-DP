// link - https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=1&difficulty%5B%5D=0&category%5B%5D=Graph&sortBy=submissions



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(int node, vector<int> adj[], vector<int>&ans, vector<bool>&visited){
        visited[node]=1;
        ans.push_back(node);
        
        for(int j=0; j<adj[node].size(); j++){
            if(!visited[adj[node][j]])
            DFS(adj[node][j], adj, ans, visited);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V, 0);
        vector<int>ans;
        DFS(0, adj, ans, visited);
        return ans;
    }
};

//{ Driver Code Starts.
