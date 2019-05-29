#include<bits/stdc++.h>

using namespace std;

void print(int sol[][20],int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<sol[i][j]<<" ";
        }
        
    }
    cout<<endl;
}

void mazeHelp(int maze[][20],int N,int sol[][20],int x,int y){
    // 1.Base case
    if(x==N-1 && y==N-1){
        sol[x][y]=1;
        print(sol,N);
        return;
    }
    //recursion
    
    if(x>=N || x<0 ||y>=N || y<0 || maze[x][y]==0 || sol[x][y]==1){
        return;
    }
    sol[x][y]=1;
    mazeHelp(maze,N,sol,x-1,y);
    mazeHelp(maze,N,sol,x+1,y);
    mazeHelp(maze,N,sol,x,y+1);
    mazeHelp(maze,N,sol,x,y-1);
    sol[x][y]=0;
}

void ratInAMaze(int maze[][20],int N){
    int sol[20][20];
    memset(sol,0,20*20*sizeof(int));
    mazeHelp(maze,N,sol,0,0);
}

int main(){
    int N;
    cin>>N;
    int maze[20][20];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>maze[i][j];
        }
    }
    ratInAMaze(maze,N);
    return 0;
}