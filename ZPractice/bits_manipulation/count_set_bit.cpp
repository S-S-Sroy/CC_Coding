#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    int count=0;
    cin>>num;
    while(num>0){
        num=num&(num-1);
        count++;
    }
    cout<<count;
    return 0;
}