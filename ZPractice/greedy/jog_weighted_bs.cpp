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

int search(struct job *arr,int st,int ed,int stime){
    int ans;
    while(st<=ed){
        int mid;
    mid = (st+ed)/2;
    if(arr[mid].et<=stime){
        ans=mid;
        st=mid+1;
    }
        else{
            ed = mid-1;
            ans=ed;
        }
    }
    return ans;
}

int maxProfit(struct job *arr, int N){
    int *dp = new int[N];
    dp[0] = arr[0].profit;

    for(int i=1;i<N;i++){

        //Including
        int including = arr[i].profit;
        int j;
        // for( j=i-1;j>=0;j--){
        //     if(arr[j].et<=arr[i].st){
        //         break;
        //     }
        // }
        j = search(arr,0,i-1,arr[i].st);
         //if(j!=-1)
       // {
           including+=dp[j];
       // }

        dp[i]=max(dp[i-1],including);
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