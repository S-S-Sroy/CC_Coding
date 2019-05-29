#include<bits/stdc++.h>

using namespace std;

int min_cost(int **input,int ei,int ej){
	//usuall starts from 0,0
	//1. Base Case
	
	int dp[3][3]={0};
	
	dp[ei][ej]=input[ei][ej];
	//Base case no. 1
	for(int i=ei-1;i>=0;i--){
		dp[i][ej]=dp[i+1][ej]+input[i][ej];
	}
	//Base case no. 2
	for(int j=ej-1;j>=0;j--){
		dp[ei][j]=dp[ei][j+1]+input[ei][j];
	}
	
	//fill the dp array
	for(int i=ei-1;i>=0;i--){
		for(int j=ej-1;j>=0;j--){
			dp[i][j]=input[i][j]+min(dp[i+1][j],min(dp[i+1][j+1],dp[i][j+1]));
		}
	}
	return dp[0][0];
	
	
}

int main(){
	int **input = new int*[3];
	input[0] = new int[3];
	input[1] = new int[3];
	input[2] = new int[3];
	
	input[0][0]=4;
	input[0][1]=3;
	input[0][2]=2;
	input[1][0]=1;
	input[1][1]=8;
	input[1][2]=3;
	input[2][0]=1;
	input[2][1]=1;
	input[2][2]=8;
    
    cout<<min_cost(input,2,2);
	return 0;
}