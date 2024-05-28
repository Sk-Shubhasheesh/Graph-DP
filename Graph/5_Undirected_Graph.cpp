// Adjancency List Graph Representation

// 1. Undirected Graph(no weight)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex, edges;
    cout << "Enter the vertex and Edges" << endl;
    cin>>vertex>>edges;

    // defining Adjancency List 
    vector<int>AdjList[vertex];

    
    // u->v = show edges connected like 0-1, 1-2
    int u, v;
    cout << "Enter the edges connection" << endl;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);

    }

     // print the graph
    for(int i=0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j=0; j<AdjList[i].size(); j++){
            cout<<AdjList[i][j]<<" ";
        }
        cout<< endl;
    }
    
}