#include<bits/stdc++.h>

using namespace std;

int steps_count(int N,int arr[]){
    int step_1,step_2,step_3;
    //1. Base case
    if(N<0){
        return 0;
    }
    if(N==0){
        return 1;
    }
    if(N==1){
        return 1;
    }
    if(N==2){
        return 2;
    }
    if(arr[N]>0){
        return arr[N];
    }
    step_1=steps_count(N-1,arr);
    step_2=steps_count(N-2,arr);
    step_3=steps_count(N-3,arr);
    arr[N]= step_1+step_2+step_3;
    return step_1+step_2+step_3;
}

int main(){
    int N;
    cin>>N;
     int *arr = new int[N];

    memset(arr,0,N*sizeof(int));
   cout<< steps_count(N,arr);
    return 0;
}