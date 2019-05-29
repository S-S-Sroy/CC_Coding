#include<bits/stdc++.h>

using namespace std;

void print_subset(int input[],int startIndex,int n,int output[],int m){
    //1.Base Case
    if(startIndex==n){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    //2.Recursion
    int small_output[40],smallOsize=0;
    //when element is not added
    print_subset(input,startIndex+1,n,output,m);

    int i;
    for(int i=0;i<m;i++){
        small_output[i]=output[i];
    }
    small_output[i]=input[startIndex];
    print_subset(input,startIndex+1,n,small_output,m+1);
}

int main(){
    int input[]={1,2,3,4,5};
    int output[1000];
    print_subset(input,0,5,output,0);
    return 0;
}