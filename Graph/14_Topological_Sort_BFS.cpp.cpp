// Link - https://www.geeksforgeeks.org/problems/topological-sort/1

// Topological sort Using BFS - Kahn's Algorithm

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    vector<int>InDeg(V, 0);
	    
	    // finding Indegree
	    for(int i=0; i<V; i++)
	    for(int j=0; j<adj[i].size(); j++)
	    InDeg[adj[i][j]]++;
	    
	    
	    // push all thr node of zero indegree into queue
	    queue<int>q;
	    for(int i=0; i<V; i++){
	    if(!InDeg[i])
	    q.push(i);
	    }
	    // opertaion
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        //neighbour indegree decrese
	        for(int j=0; j<adj[node].size(); j++){
	            InDeg[adj[node][j]]--;
	            if(InDeg[adj[node][j]]==0)
	            q.push(adj[node][j]);
	        }
	    }
	    return ans;
	    
	}
};