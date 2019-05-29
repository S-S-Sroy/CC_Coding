#include<bits/stdc++.h>

using namespace std;

void bitonic(int input[],int N){
	
	int *lis = new int[N];
	int *lds = new int[N];
	
	//lis
	lis[0]=1;
	for(int i=1;i<N;i++){
		lis[i]=1;
		for(int j=i-1;j>=0;j--){
			if(input[j]>=input[i]){
				continue;
			}
			int possible_ans_i = lis[j]+1;
			if(possible_ans_i > lis[i] ){
				lis[i]=possible_ans_i;
			}
		}
	}
	//lds
	lds[N-1]=1;
	for(int i=N-2;i>=0;i--){
		lds[i]=1;
		for(int j=i+1;j<N;j++){
			if(input[j]>=input[i]){
				continue;
			}
			int possible_ans_i = lds[j]+1;
			if(possible_ans_i > lds[i] ){
				lds[i]=possible_ans_i;
			}
		}
	}
	
	//print
	
	for(int i=0;i<N;i++){
		cout<<lis[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0;i<N;i++){
		cout<<lds[i]<<" ";
	}
	cout<<endl;
	
	int max = 0;
	for(int i=0;i<N;i++){
		if(lis[i]+lds[i]>max){
			max=lis[i]+lds[i];
		}
	}
	cout<<max-1;
	
	delete []lis;
	delete []lds;
}

int main(){
	string s;
	cin>>s;
	
	int length = s.length();
	
	int input[length];
	for(int i=0;i<length;i++){
		input[i]=s[i]-'0';
	}
	
	bitonic(input,length);
	return 0;
}