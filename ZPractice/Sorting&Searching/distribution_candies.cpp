#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll k,ll arr[], int n, ll mid){

    ll student = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>=mid){
            student+=(arr[i]/mid);
        }

        if(student>=k){
            return true;
        }
    }
    return false;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin >>n>>k;
        ll arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // sort the array

        sort(arr,arr+n);

        ll start=0;
        ll end = arr[n-1];
        ll ans;

        while(start<=end){
            ll mid = start + (end-start)/2;

            if(check(k,arr,n,mid)){
                ans=mid;
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}