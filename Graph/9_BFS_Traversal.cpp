// Link - https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?page=1&difficulty%5B%5D=0&category%5B%5D=Graph&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        q.push(0);
        vector<bool>visited(V, 0);
        visited[0]=1;
        vector<int>ans;
        int node;
        while(!q.empty()){
            node = q.front();
            q.pop();
            ans.push_back(node);
            for(int j=0; j<adj[node].size(); j++){
                if(!visited[adj[node][j]])
                {
                    visited[adj[node][j]]=1;
                    q.push(adj[node][j]);
                }
                
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
