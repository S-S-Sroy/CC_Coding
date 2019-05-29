#include<bits/stdc++.h>

using namespace std;

bool is_sorted(int a[],int size){
    if(size == 0 || size ==1){ //this means only onw element is present hence one is always sorted.
    return true;
    }

    if(a[0]>a[1]){
        return false;
    }
    bool isSmallSorted = is_sorted(a+1,size-1);
    return isSmallSorted;
}

int main(){
    
    return 0;
}