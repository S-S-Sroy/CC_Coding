#include<bits/stdc++.h>

using namespace std;

int fib(int n,int arr[]){
    if(n==0 || n==1){
        arr[n]=1;
        return 1;
    }

    if(arr[n]>0){
        return arr[n];
    }
    int output = fib(n-1,arr)+fib(n-2,arr);
    arr[n] = output;
    return output;
}

int main(){
    int arr[10000];
    memset(arr,0,10000*sizeof(int));
    int n;
    cin>>n;
    fib(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}