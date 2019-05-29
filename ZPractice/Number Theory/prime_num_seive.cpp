#include<iostream>
using namespace std;
//sieve

void prime(int N){
    bool arr[N+1];
    for(int i=0;i<=N;i++){
        arr[i]=true;
    }
    arr[0]=false;
    arr[1]=false;
    
    for(int i=2;i*i<=N;i++){
        if(arr[i]==true)
        for(int j=i*i;j<=N;j+=i){
            arr[j]=false;
        }
    }

    for(int i=0;i<=N;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    int count =0;
    for(int i=0;i<=N;i++){
        if(arr[i]==true){
            count++;
        }
    }
    cout<<count;
}

int main(){
	// Write your code here
    int N;
    cin>>N;
    prime(N);
	return 0;
}