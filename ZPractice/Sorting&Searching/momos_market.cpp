#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int n;
    cin>>n;
    ll arr1[n],prefix[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    prefix[0]=arr1[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr1[i];
    }
    int q;
    cin>>q;
    ll arr2[q];
    for(int i=0;i<q;i++){
        cin>>arr2[i];
    }
    int start = 0;
    int end = n-1;
    int ans;
   
    for(int i=0;i<q;i++){
        while(start<=end){
        ll mid=(start+end)/2;
        if(prefix[mid]<arr2[i]<prefix[mid+1]){
            ans = mid;
            start=mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    
    cout<<(ans+1)<<" "<<arr2[i]-prefix[ans]<<endl;
}
    return 0;
}