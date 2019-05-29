#include<bits/stdc++.h>

using namespace std;

struct job{
    int st;
    int et;
    int profit;
};

bool compare(struct job &a,struct job &b){
    return a.et<b.et;
}

int maxProfit(struct job *arr, int N){
    int *dp = new int[N];
    dp[0] = arr[0].profit;

    for(int i=1;i<N;i++){

        //Including
        int including = arr[i].profit;
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[j].et<=arr[i].st){
                break;
            }
        }
        including+=arr[j].profit;

        dp[i]=max(arr[i-1].profit,including);
    }
    return dp[N-1];
}

int main(){
    int N;
    cin>>N;
    struct job arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i].st>>arr[i].et>>arr[i].profit;
    }

    sort(arr,arr+N,compare);

    cout<<maxProfit(arr,N);
    return 0;
}