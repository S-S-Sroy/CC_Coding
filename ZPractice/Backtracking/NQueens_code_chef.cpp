#include<bits/stdc++.h>
using namespace std;

char board[8][8];


bool isPossible(int N,int row,int col){
	//horizontally
	for(int i=0;i<N;i++){
		if(board[row][i]=='Q'){
			return false;
		}
	}
	//vertical
	for(int i=0;i<N;i++){
		if(board[i][col]=='Q'){
			return false;
		}
	}
	
	//leftdiagonal
	for(int i=row-1,j=col-1; i>=0 && j>=0;i--,j--){
		if(board[i][j]=='Q'){
			return false;
		}
	}
	//right diagonal
	for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++){
		if(board[i][j]=='Q'){
			return false;
		}
	}
	
	return true;
}
    //vertically
    

void placeNQueens(int N,int row,int &count){
	//1. Base case
	if(row==N){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout<<board[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	  count++;
	return;
	}
	for(int j=0;j<N;j++){
		if(isPossible(N,row,j)){
			//recursively call next row
			board[row][j]='Q';
			placeNQueens(N,row+1,count);
			board[row][j]='-';
		}
	}
	return;
}

void NQueens(int N,int &count){
	
	 placeNQueens(N,0,count);
}

int main(){
	int N;
	int count=0;
	cin>>N;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			board[i][j]='-';
		}
	}
	NQueens(N,count);
if(count==0){
	cout<<"Not Possible"<<endl;
}
	return 0;
}