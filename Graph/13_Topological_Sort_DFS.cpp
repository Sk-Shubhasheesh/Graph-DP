// Link - https://www.geeksforgeeks.org/problems/topological-sort/1

// Topological sort Using DFS



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void DFS(int node, vector<int> adj[], vector<bool>&visited, stack<int>&s){
	    visited[node] = 1;
	    // looks at its neighbour one by one
	    for(int j=0; j<adj[node].size(); j++){
	        if(!visited[adj[node][j]])
	        DFS(adj[node][j], adj, visited, s);
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool>visited(V, 0);
	    stack<int>s;
	    
	    for(int i=0; i<V; i++){
	        if(!visited[i])
	        DFS(i, adj, visited, s);
	    }
	    vector<int>ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	    
	  
	}
};