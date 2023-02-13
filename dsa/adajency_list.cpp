#include <iostream>
#include <algorithm>

using namespace std;

void addEdge(vector<int> adj[], int s, int d){
    adj[s].push_back(d);
    adj[d].push_back(s);
}

// taking the same list as in the different arguements !! 

void printGraph(vector<int> adj[], int v){
    for(int i = 0; i < v; i++){
        cout << v; 
        for(auto x : adj[i]){
            cout << " " << x;  
        }
        printf("/n");
    }
}

int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}