// Adjancency List Graph Representation

// 3. Directed Weighted Graph

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edges;

    // Defining Adjacency List
    vector<vector<pair<int, int>>> AdjList(vertex);

    // u->v = show edges connected like 0->1, 1->2 with weight w
    int u, v, weight;
    cout << "Enter the edges connection with weights (format: u v w):" << endl;
    for(int i = 0; i < edges; i++){
        cin >> u >> v >> weight;
        AdjList[u].push_back(make_pair(v, weight));
    }

    // Print the graph
    for(int i = 0; i < vertex; i++){
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++){
            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << ") ";
        }
        cout << endl;
    }

    return 0;
}
