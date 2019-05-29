#include<bits/stdc++.h>

using namespace std;

//set matlb ith bit ko one krdo
int main(){
    int num;
    int i;
    cin>>num>>i;
    int dummy;
    dummy = 1<<i;
    num = num | dummy;
    cout<<num;

    return 0;
}