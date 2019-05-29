#include<bits/stdc++.h>
#include<vector>
#include<set>

using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<"\n Adjacency list of vertex"<<v<<"\n head";
    
    for(auto x: adj[v]){
        cout<<"->"<<x;
        printf("\n");
    }
    }
}
int main()
{
    int v =5;
    vector<int> adj[v];
}