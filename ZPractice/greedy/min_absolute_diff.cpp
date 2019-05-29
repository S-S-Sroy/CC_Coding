// arr - input array
// n - size of array
#include<bits/stdc++.h>
using namespace std;

int minAbsoluteDiff(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int min=100000;
    int diff;
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++){
        diff =arr[i+1]-arr[i];
        if(min>diff){
            min = diff;
        }
    }
    return min;

}
