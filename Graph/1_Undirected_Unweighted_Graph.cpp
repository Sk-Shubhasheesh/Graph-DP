// Adjancency Graph Representation

// 1. Undirected Unweighted Graph
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex, edges;
    cout << "Enter the vertex and Edges" << endl;
    cin>>vertex>>edges;

    // initalize the matrix
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));

    // u->v = show edges connected like 0-1, 1-2
    int u, v;
    cout << "Enter the edges connection" << endl;

    // looping to take edges and maked it in graph
    for (int i = 0; i<edges; i++)
    {
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
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