#include<bits/stdc++.h>

using namespace std;

int knapsnack(int *weight,int *value,int N,int maxWeight){
    //1.Base case
    if(N==0){
        return 0;
    }
    
    if(maxWeight<=weight[N-1]){
        int value3 = knapsnack(weight,value,N-1,maxWeight);
        return value3;
    }

    

    //Recursive call
    
    //last element is included
    int value1 =value[N-1] + knapsnack(weight,value,N-1,maxWeight-weight[N-1]);
    
    //last element is not included
    int value2 = knapsnack(weight,value,N-1,maxWeight);

    return max(value1,value2);


}

int main(){
    int N;
    cin>>N;
    int *W = new int[N];
    int *V = new int[N];
    for(int i=0;i<N;i++){
        cin>>W[i];
    }
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    int maxWeight;
    cin>>maxWeight;

    cout<<knapsnack(W,V,N,maxWeight);
    return 0;
}