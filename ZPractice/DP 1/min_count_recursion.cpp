#include<bits/stdc++.h>

using namespace std;

#define max 1000000
int dp[3][3]={-1};

int min_cost(int **input,int si,int sj,int ei,int ej){
	
	if(si==ei && sj==ej){
		return input[ei][ej];
	}
	
	if(si>ei || sj>ej){
		return max;
	}
	
	if(dp[si][sj]>0){
		return dp[si][sj];
	}
	
	int step_down = min_cost(input,si,sj+1,ei,ej);
	int step_digonal = min_cost(input,si+1,sj+1,ei,ej);
	int step_right = min_cost(input,si+1,sj,ei,ej);
	
	dp[si][sj] = input[si][sj]+min(step_down,min(step_digonal,step_right));
	return dp[si][sj];
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
	
	
	

	
	cout<< min_cost(input,0,0,2,2)<<endl;
	
	delete [] input[0];
	delete [] input[1];
	delete [] input[2];
	delete [] input;
	
	return 0;
}