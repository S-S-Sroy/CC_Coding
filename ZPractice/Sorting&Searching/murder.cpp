#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll merge(int arr[],int left,int mid,int right,int sum){
    int i=left,j=mid,k=0;
    int temp[right-left+1];
    

    while(i<mid && j<=right){
        if(arr[i]<arr[j]){
            sum += (right-j+1)*arr[i];
            temp[k++]=arr[i++];  
        }
        else{
            
            temp[k++]=arr[j++];
        }
    }

    while(i<mid){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=left,k=0;i<=right;i++,k++){
        arr[i]=temp[k];
    }
     
    return sum;
}

ll merge_sort(int arr[],int left,int right){
    
    ll sum=0;
    if(right>left){ // base case
        int mid = (left+right)/2;

        ll left_sum = merge_sort(arr,left,mid);
        ll right_sum = merge_sort(arr,mid+1,right);
        ll merge_sum = merge(arr,left,mid+1,right,sum);

        return left_sum+right_sum+merge_sum;
    }
    return sum;
}

int main(){
    int arr[]={1 ,5 ,3 ,6 ,4,7};
   
    cout<<merge_sort(arr,0,5)<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}