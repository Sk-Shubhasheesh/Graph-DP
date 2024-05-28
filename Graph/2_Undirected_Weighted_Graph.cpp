// Adjancency Graph Representation

// 2. Undirected Weighted Graph
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex, edges;
    cout << "Enter the vertex and Edges" << endl;
    cin>>vertex>>edges;

    // initalize the matrix
    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

    // u->v = show edges connected like 0-1, 1-2
    int u, v, weight;
    cout << "Enter the edges connection with weight" << endl;

    // looping to take edges and maked it in graph
    for (int i = 0; i<edges; i++)
    {
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }

    // print the graph
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}