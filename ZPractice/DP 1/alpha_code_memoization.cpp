#include<bits/stdc++.h>

using namespace std;

int alpha(int arr[],int N,int count[]){
	//1.Base case
	if(N==1){
		return 1;
	}
	if(N==0){
		return 1;
	}
	//2.Memoization
	if(count[N]>0){
		return count[N];
	}
	
	//3.Recursion
	
	int output_count = alpha(arr,N-1,count);
	if(arr[N-2]*10+arr[N-1]<=26){
		output_count+=alpha(arr,N-2,count);
	}
	count[N] = output_count;
	return output_count;
}

int main(){
	int arr[1000],count[1000+1];
	memset(count,0,(1000+1)*sizeof(int));
	string s;
	cin>>s;
	
	for(int i=0;i<s.length();i++){
		arr[i]=s[i]-'0';
	}
	
	cout<<alpha(arr,s.length(),count);
	return 0;
}