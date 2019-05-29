#include<bits/stdc++.h>

using namespace std;

int bitonic(int input[],int N){
   int incr[N];
   incr[0]=0;
   incr[1]=1;

   for(int i=2;i<N;i++){
       incr[i]=1;
       for(int j=i-1;j>=0;j++){
           if((input[i]>input[j]) && (incr[i]<incr[j]+1)){
               incr[i]=incr[j]+1;
           }
       }
   }
   
   int decr[N];
   decr[N-1]=1;
   for(int i = N-2;i>=0;i--){
       decr[i]=1;
       for(int j= N-1;j>i;j--){
           if((input[i]>input[j]) && (decr[i]<decr[j]+1)){
               decr[i]=decr[j]+1;
           }
       }
   }

   int max = incr[0]+decr[0]-1;
   for(int i=1;i<N;i++){
       if(incr[i]+decr[i]-1>max){
           max = incr[i]+decr[i]-1;
       }
   }
   return max;
}

int main(){
    int N;
    cin>>N;
    int *input = new int[N];
    for(int i=0;i<N;i++){
        cin>>input[i];
    }
    cout<<bitonic(input,N);
    return 0;
}