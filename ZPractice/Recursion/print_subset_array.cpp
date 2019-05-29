#include<bits/stdc++.h>

using namespace std;

int subset(int input[],int n,int startIndex,int output[][100]){
    //1.Base Case
    if(startIndex==n){
        output[0][0]=0;
        return 1; //no. of rows
    }

    //2.Recursion
    int smallSize = subset(input,n,startIndex+1,output);

    for(int i=0;i<smallSize;i++){
        output[i+smallSize][0]=output[i][0]+1;
        output[i+smallSize][1]=input[startIndex]; // jis pai kaam krna hai usko phele index main add krdia phir bakki arrays ko copy krke append krdia
        
        for(int j=1;j<=output[i][0];j++){
            output[i+smallSize][j+1]=output[i][j];
        }
    }
    return 2*smallSize;
    
}

int main(){
    int input[]={1,2,3,4};
    int output[100][100];
    int rows =subset(input,4,0,output);
    cout<<rows;
    
    return 0;
}