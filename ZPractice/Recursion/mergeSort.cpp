#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int st,int ed){
    int size = ed-st+1;
    int mid = (st+ed)/2;
    int i=st;
    int j=mid+1;
    int k=0;
    int *output = new int[size];
    while(i<=mid && j<=ed){
        if(arr[i]<arr[j]){
            output[k]=arr[i];
            i++;
            k++;
        }
        else{
            output[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        output[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ed){
        output[k]=arr[j];
        j++;
        k++;
    }

    int m=0;
    for(int i=st;i<=ed;i++){
        arr[i]=output[m];
        m++;
    }
    delete[] output;
}

void mergeSort(int arr[],int st,int ed){
    if(st>=ed){
        return;
    }
    int mid = (st+ed)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,ed);

    merge(arr,st,ed);
}

int main(){
      int arr[10]={10,9,8,7,6,5,4,3,2,1};

      mergeSort(arr,0,9);
      for(int i=0;i<10;i++){
          cout<<arr[i]<<" ";
      }
}