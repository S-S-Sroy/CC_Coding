#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;

    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }

    while(j<=e){
        temp[k++]=arr[j++];
    }
    //We need to copy all the elements to original arrays
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }
   

}

void merge_sort(int *arr,int s,int e){
    //1.base case -1 or 0 elements are left in the sub array
    if(s>=e){
        return; 
    }
    //2.Divide
    int mid = (s+e)/2;

    //3.Recursively sort the array 
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    //Merge the two parts
    merge(arr,s,e);
}

int main(){
    int arr[]={5,4,3,2,1};
    merge_sort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}