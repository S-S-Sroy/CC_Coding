#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int si,int ei){
    int i=si-1;
    int pivot = a[ei];
    for(int j=si;j<ei;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[ei]);
    return i+1;
}

void qs(int a[],int si,int ei){
    if(si>=ei){
       return;
    }
        int c = partition(a,si,ei);
        qs(a,si,c-1);
        qs(a,c+1,ei);
    
}

int main(){
    int arr[]={2,7,8,6,1,5,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    int si=0;
    int ei=length-1;
    qs(arr,si,ei);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}