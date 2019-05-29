#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
//undirected graph

void addEdge(int u,int w,vector<int>adj[]){
    adj[u].push_back(w);
    adj[w].push_back(u);
}

void printGraph(int v, vector<int>adj[]){
    int i;
    for( i=0;i<v;i++){
        cout<<"\nAdjacency list of the vertex"<<v<<"\n head";
            for(auto x:adj[i]){
            cout<<"->"<<x;
            printf("\n");
        }
    }
}

int main(){
    int v=4;
   // scanf("%d",&v);
    vector <int> adj[v];
    //addEdge(u,w,adj);
    addEdge(1,2,adj);
    addEdge(1,3,adj);
    addEdge(2,1,adj);
    addEdge(2,3,adj);
    addEdge(2,4,adj);
    addEdge(3,1,adj);
    addEdge(3,2,adj);
    addEdge(3,4,adj);
    addEdge(4,2,adj);
    addEdge(4,3,adj);

    printGraph(v,adj);
}