// link - https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
// Detect cycle in a directed graph using BFS

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>InDeg(V, 0);
        
        for(int i=0; i<V; i++){
            for(int j=0; j<adj[i].size(); j++){
                InDeg[adj[i][j]]++;
            }
        }
        
        queue<int>q;
        int count;
        for(int i=0; i<InDeg.size(); i++){
            if(!InDeg[i]) {
                q.push(i);
                count = 0;
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            
            
            for(int j=0; j<adj[node].size(); j++){
                InDeg[adj[node][j]]--;
                if(!InDeg[adj[node][j]]){
                     q.push(adj[node][j]);
                }
            }
        }
        return count!=V;
        
    }
};