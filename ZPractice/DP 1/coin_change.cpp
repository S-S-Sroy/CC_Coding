#include<bits/stdc++.h>

using namespace std;

int coin_change(int k,int d[],int length,int arr[][4]){
	if(k==0){
		return 1;
	}
	if(k<0){
		return 0;
	}
	if(length==0){
		return 0;
	}
	
	if(arr[k][length]>-1){
		return arr[k][length];
	}
	
	int first = coin_change(k-d[0],d,length,arr);
	int second = coin_change(k,d+1,length-1,arr);
	arr[k][length] = first+second;
	return arr[k][length];
}

int main(){
	int d[3]={1,2,3};
	int arr[5][4];
	memset(arr,-1,4*5*sizeof(int));
	cout<<coin_change(4,d,3,arr);
	return 0;
}