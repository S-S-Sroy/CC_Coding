#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll merge(int A[],int left,int mid,int right){
    int i=left,j=mid,k=0;
    int temp[right-left+1];
    ll count = 0;

    while(i<mid && j<=right){
        if(A[i]<=A[j]){
            temp[k++]=A[i++];
        }else{
            temp[k++]=A[j++];
            count+=mid - i;
        }
    }
    while(i<mid){
        temp[k++]=A[i++];
    }
    while(j<=right){
        temp[k++]=A[j++];
    }
    for(int i=left,k=0;i<=right;i++,k++){
        A[i]=temp[k];
    }
    return count;
}

ll merge_sort(int A[],int left,int right){
    
    long long count=0;
    if(right>left){ //base case
    int mid = (left+right)/2;

    ll countLeft = merge_sort(A,left,mid);
    ll countRight = merge_sort(A,mid+1,right);
    ll myCount = merge(A,left,mid+1,right);

    return countLeft+countRight+myCount;
    }
    return count;
}

ll solve(int A[],int n){
    ll ans = merge_sort(A,0,n-1);
    return ans;
}

int main(){
    int A[]={5,4,3,2,1};
    cout<<solve(A,5);
    
    return 0;
}