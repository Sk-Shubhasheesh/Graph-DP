// Adjancency List Graph Representation

// 1. Undirected Weighted Graph

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex, edges;
    cout << "Enter the vertex and Edges" << endl;
    cin>>vertex>>edges;

    // defining Adjancency List 
    vector<pair<int,int> >AdjList[vertex];

    
    // u->v = show edges connected like 0-1, 1-2
    int u, v, weight;
    cout << "Enter the edges connection with weight" << endl;
    for(int i=0; i<edges; i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(u, weight));

    }

     // print the graph
    for(int i=0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j=0; j<AdjList[i].size(); j++){
            cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
        }
        cout<< endl;
    }
    
}