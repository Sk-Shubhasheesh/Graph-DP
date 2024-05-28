// Adjancency List Graph Representation

// 4. Directed Unweighted Graph

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edges;

    // Defining Adjacency List
    vector<vector<int>> AdjList(vertex);

    // u->v = show edges connected like 0->1, 1->2
    int u, v;
    cout << "Enter the edges connection (format: u v):" << endl;
    for(int i = 0; i < edges; i++){
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    // Print the graph
    for(int i = 0; i < vertex; i++){
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
