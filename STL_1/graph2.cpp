#include<iostream>
#include<vector>

using namespace std;

void addEdge(int u,int v,vector<int>adj[]){
    adj[u].push_back(v);
   
}
void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<"\n Adjacency list of the vertex"<<i<<"\n head";
    
    for(auto x:adj[i]){
        cout<<"->"<<x;
       
    }
    }
}
int main()
{
    int v=5;
    vector<int>adj[v];
    addEdge(0,1,adj);
    addEdge(0,2,adj);
    addEdge(0,3,adj);
    addEdge(0,4,adj);
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
    printGraph(adj,v);
}