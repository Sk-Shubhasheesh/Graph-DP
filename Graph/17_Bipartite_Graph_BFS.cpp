// Bipartite Graph Using BFS


// Problem Link - https://www.geeksforgeeks.org/problems/bipartite-graph/1
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool isBipartite(int V, vector<int> adj[]) {
        vector<int> color(V, -1);
        queue<int> q;

        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {
                q.push(i);
                color[i] = 0;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (int j = 0; j < adj[node].size(); j++) {
                        if (color[adj[node][j]] == -1) {
                            color[adj[node][j]] = (color[node] + 1) % 2;
                            q.push(adj[node][j]);
                        } else {
                            if (color[node] == color[adj[node][j]])
                                return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
