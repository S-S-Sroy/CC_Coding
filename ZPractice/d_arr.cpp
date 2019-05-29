#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    //1-D array
/*
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */

    //2-D array
    int m;
    cin>>m;
    int row=m,col=m;

    int **a = new int*[row];
    for(int i=0;i<row;i++){
        a[i]=new int[col];

           for(int j=0;j<col;j++){
            cin>>a[i][j];
            }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    


    return 0;
}