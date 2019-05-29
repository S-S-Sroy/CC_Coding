#include<bits/stdc++.h>

using namespace std;

void countBits(int n){
    int count =0;
    while(n>0)
    {
        count +=(n&1);
        n=n>>1;
    }
    cout<<count;
}

int main(){
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    countBits(n);
}