#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int N;
    cin>>N;
    ll arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    ll minCost=0;
    int i,j;
    for( i=0;i<N-1;i++){
        for( j=i+1;j<N-1;j++){
            if((abs(arr[i])>abs(arr[j])) || (abs(arr[i])==abs(arr[j]) && arr[i]>0)){
                break;
            }
        }
        minCost+=(j-i)*arr[i]+(j*j-i*i)*(arr[i]*arr[i]);
        i=j-1;
    }
    cout<<minCost;
    return 0;
}